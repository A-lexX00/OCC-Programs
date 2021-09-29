;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname lab_16_racket_graphics) (read-case-sensitive #t) (teachpacks ((lib "draw.rkt" "teachpack" "htdp"))) (htdp-settings #(#t constructor repeating-decimal #f #t none #f ((lib "draw.rkt" "teachpack" "htdp")) #f)))
;  Nguyen, Da
;
;  CS A250
;  May 20, 2018
;
;  Lab 16

;To open a canvas
(start 600 600)
(draw-solid-rect (make-posn 0 0) 600 250 'LightSkyBlue)
(draw-solid-rect (make-posn 0 250) 600 300 'LimeGreen)
(draw-solid-rect (make-posn 0 535) 600 175 'SandyBrown) ;pave road

;House
(draw-solid-rect (make-posn 50 280) 400 200 'SaddleBrown)

;roof
(draw-solid-line (make-posn 50 280) (make-posn 250 180) 'DarkRed)
(draw-solid-line (make-posn 250 180) (make-posn 450 280) 'DarkRed)
(draw-solid-rect (make-posn 50 275) 400 5 'DarkRed)
(draw-solid-rect (make-posn 55 270) 390 5 'DarkRed)
(draw-solid-rect (make-posn 60 265) 380 5 'DarkRed)
(draw-solid-rect (make-posn 65 260) 370 5 'DarkRed)
(draw-solid-rect (make-posn 70 255) 360 5 'DarkRed)
(draw-solid-rect (make-posn 75 250) 350 5 'DarkRed)
(draw-solid-rect (make-posn 80 245) 340 5 'DarkRed)
(draw-solid-rect (make-posn 85 240) 330 5 'DarkRed)
(draw-solid-rect (make-posn 90 235) 320 5 'DarkRed)
(draw-solid-rect (make-posn 95 230) 310 5 'DarkRed)
(draw-solid-rect (make-posn 100 225) 300 5 'DarkRed)
(draw-solid-rect (make-posn 105 220) 290 5 'DarkRed)
(draw-solid-rect (make-posn 110 215) 280 5 'DarkRed)
(draw-solid-rect (make-posn 115 210) 270 5 'DarkRed)
(draw-solid-rect (make-posn 120 205) 260 5 'DarkRed)
(draw-solid-rect (make-posn 125 200) 250 5 'DarkRed)
(draw-solid-rect (make-posn 130 195) 240 5 'DarkRed)
(draw-solid-rect (make-posn 135 190) 230 5 'DarkRed)
(draw-solid-rect (make-posn 140 185) 220 5 'DarkRed)
(draw-solid-rect (make-posn 145 180) 210 5 'DarkRed)

;rock path
(draw-solid-disk (make-posn 250 500) 32 'SandyBrown)
(draw-solid-disk (make-posn 250 525) 38 'SandyBrown)

(draw-solid-rect (make-posn 305 170) 25 40 'SaddleBrown) ;chimney pot
(draw-solid-rect (make-posn 225 380) 50 100 'Azure) ;door frame
(draw-solid-disk (make-posn 236 430) 5 'Maroon) ;door knob

(draw-solid-rect (make-posn 120 350) 50 50 'DarkGray) ;left window frame
(draw-solid-line (make-posn 145 350) (make-posn 145 399) 'White)
(draw-solid-line (make-posn 120 375) (make-posn 169 375) 'White)

(draw-solid-rect (make-posn 330 350) 50 50 'DarkGray) ;right window frame
(draw-solid-line (make-posn 355 350) (make-posn 355 399) 'White)
(draw-solid-line (make-posn 330 375) (make-posn 379 375) 'White)

;sun
(draw-solid-disk (make-posn 490 100) 50 'Yellow) ;outer
(draw-solid-disk (make-posn 490 100) 40 'Goldenrod) ;inner

;mailbox
(draw-solid-rect (make-posn 190 460) 5 55 'Black) ;stem
(draw-solid-rect (make-posn 180 440) 25 25 'Black) ;box
(draw-solid-line (make-posn 200 450) (make-posn 200 464) 'White) ;handle
(draw-solid-line (make-posn 192 450) (make-posn 200 450) 'White) ;handle

;String introduction
(draw-solid-string (make-posn 500 570) "Hello Sun!...")