//  $Id: Intro.cc,v 1.1 2000/02/04 23:45:18 mbn Exp $
//
//  Pingus - A free Lemmings clone
//  Copyright (C) 1999 Ingo Ruhnke <grumbel@gmx.de>
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#include "PingusResource.hh"

#include "globals.hh"
#include "Intro.hh"

Intro::Intro()
{
  event = new Intro::Event;

  event->intro = this;

  if (music_enabled) { 
    //    music = CL_Streamed_MikModSample::create("../data/music/strut.it"); 
    // sound = CL_Sample::create("../data/sounds/winlevel.wav", 0);
  }
}

Intro::~Intro()
{
  if (music_enabled) {
    delete ses_music;
  }
  delete event;
}

void
Intro::draw()
{
  quit = false;

  if (verbose) cout << "Intro: adding event handler" << endl;

  CL_Input::chain_button_release.push_back(event);

  int x_pos = CL_Display::get_width() / 2;
  int y_pos = 0;
  
  if (music_enabled) 
    {
      ses_music = new CL_SoundBuffer_Session( music->prepare());
      ses_music->play();
    }

  logo = CL_Surface::load("Game/logo_t", PingusResource::get("game.dat"));

  for(y_pos = -(int)(logo->get_height())/2; 
      (y_pos < CL_Display::get_height() / 2 - 110) && !quit;
      y_pos += 2)
    {
      CL_Display::fill_rect(0,0, CL_Display::get_width(), CL_Display::get_height(),
			    1.0, 1.0, 1.0, 1.0);
      logo->put_screen(x_pos - logo->get_width()/2,
		       y_pos - logo->get_height()/2);
      CL_Display::flip_display(true);
      CL_System::keep_alive();
    }
  
  if (sound_enabled) 
    {
      ses_sound = sound->play();
    }
  
  for(float i=1.0; (i > 0.0) && !quit; i -= 0.05)
    {
      CL_Display::fill_rect(0,0, CL_Display::get_width(), CL_Display::get_height(),
			    i, i, i, 1.0);
      logo->put_screen(x_pos - logo->get_width()/2,
		       y_pos - logo->get_height()/2);
      CL_Display::flip_display(true);
      CL_System::keep_alive();
    }

  if (quit)
    {
      CL_Display::clear_display();
      CL_Display::flip_display(true);
    }

  if (verbose) cout << "Intro: Removing event handler" << endl;
  CL_Input::chain_button_release.remove(event);
}

bool
Intro::Event::on_button_release(CL_InputDevice* device, const CL_Key& key)
{
  switch (key.id)
    {
    case CL_KEY_SPACE:
    case CL_KEY_ESCAPE:
    case CL_KEY_ENTER:
      if (verbose) cout << "Intro::Event: Recieved event, stopping intro" << endl;
      intro->quit = true;
      break;
    }
  return true;
}

/* EOF */
