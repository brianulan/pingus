//  Pingus - A free Lemmings clone
//  Copyright (C) 2002 Ingo Ruhnke <grumbel@gmx.de>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//  
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//  
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "resource.hpp"
#include "fonts.hpp"

namespace Fonts {

std::string encoding("iso-8859-1");

Font chalk_large;
Font chalk_normal;
Font chalk_small;

Font pingus_small;
Font pingus_small_fixnum;

Font courier_small;

Font verdana11;

Font lcd;

void
init ()
{
  chalk_large  = Resource::load_font("fonts/chalk_large"  + std::string("-") + encoding); 
  chalk_normal = Resource::load_font("fonts/chalk_normal" + std::string("-") + encoding);
  chalk_small  = Resource::load_font("fonts/chalk_small"  + std::string("-") + encoding);

  pingus_small = Resource::load_font("fonts/pingus_small" + std::string("-") + encoding);
  pingus_small_fixnum = Resource::load_font("fonts/pingus_small_fixnum" + std::string("-") + encoding);

  courier_small = Resource::load_font("fonts/courier_small" + std::string("-") + encoding);

  verdana11 = Resource::load_font("fonts/verdana11" + std::string("-") + encoding);

  lcd          = Resource::load_font("fonts/lcd");
}

void deinit () 
{
  chalk_large  = Font();
  chalk_normal = Font();
  chalk_small  = Font();
  pingus_small = Font();
  courier_small = Font();
  verdana11 = Font();
  lcd = Font();
}

} // namespace Fonts

/* EOF */
