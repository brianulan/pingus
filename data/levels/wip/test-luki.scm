;; generated by xml2sexpr.rb from file 'branches/pingus_0_6/data/levels/wip/test-luki.pingus'
(pingus-level 
  (version 2)
  (head 
    (levelname "PLE Level")
    (description "This level has no name ")
    (author )
    (number-of-pingus 100)
    (number-to-save 50)
    (time 9000)
    (difficulty 5)
    (playable 0)
    (comment )
    (actions 
      (basher 20)
      (blocker 20)
      (bomber 20)
      (bridger 20)
      (climber 20)
      (digger 20)
      (floater 20)
      (jumper 20)
      (miner 20))
    (music "none")
    (levelsize 1200 600))
  (objects 
    (surface-background 
      (surface 
        (image "textures/happyclouds")
        (modifier "ROT0"))
      (color 0 0 0 0)
      (scroll-x 0.0)
      (scroll-y 0.0)
      (para-x 0.5)
      (para-y 0.5)
      (stretch-x 0)
      (stretch-y 0)
      (position 0 0 -150))
    (groundpiece 
      (type "ground")
      (surface 
        (image "groundpieces/ground/jungle/stick3")
        (modifier "ROT0"))
      (position 255 212 0))
    (groundpiece 
      (type "bridge")
      (surface 
        (image "groundpieces/ground/industrial/pipe_bl")
        (modifier "ROT0"))
      (position 22 337 0))
    (groundpiece 
      (type "ground")
      (surface 
        (image "groundpieces/ground/industrial/pipe2")
        (modifier "ROT0"))
      (position 22 305 0))
    (groundpiece 
      (type "ground")
      (surface 
        (image "groundpieces/ground/industrial/pipe2")
        (modifier "ROT0"))
      (position 22 211 0))
    (groundpiece 
      (type "ground")
      (surface 
        (image "groundpieces/ground/industrial/pipe2")
        (modifier "ROT0"))
      (position 22 274 0))
    (groundpiece 
      (type "ground")
      (surface 
        (image "groundpieces/ground/industrial/pipe5")
        (modifier "ROT0"))
      (position 22 242 0))
    (groundpiece 
      (type "ground")
      (surface 
        (image "groundpieces/solid/misc/metalplate_horiz")
        (modifier "ROT0"))
      (position 113 345 0))
    (groundpiece 
      (type "ground")
      (surface 
        (image "groundpieces/solid/misc/metalplate_horiz")
        (modifier "ROT0"))
      (position 52 346 0))
    (entrance 
      (position 361 115 0)
      (type "generic")
      (direction "left")
      (release-rate 25)
      (owner-id 0))
    (exit 
      (owner-id 0)
      (position 469 215 0)
      (surface 
        (image "exits/sweetexit")
        (modifier "ROT0"))
      (owner-id 0))
    (exit 
      (owner-id 0)
      (position 118 346 0)
      (surface 
        (image "exits/sortie_anim")
        (modifier "ROT0"))
      (owner-id 0))
    (hotspot 
      (surface 
        (image "entrances/space")
        (modifier "ROT0"))
      (position 331 52 0)
      (speed -1)
      (parallax 1))
    (fake_exit 
      (position 253 106 0))))
;; EOF ;;