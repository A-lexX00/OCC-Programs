;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname lab16) (read-case-sensitive #t) (teachpacks ((lib "draw.rkt" "teachpack" "htdp"))) (htdp-settings #(#t constructor repeating-decimal #t #t none #f ((lib "draw.rkt" "teachpack" "htdp")) #f)))
;Banh, Alex
;
;CS A250
;May 20, 2018
;
;Lab 16

; canvas
(start 600 600)
(draw-solid-rect (make-posn 0 0) 600 600 'SkyBlue)
(draw-solid-rect (make-posn 0 350) 600 250 'DarkGreen)
(draw-solid-disk (make-posn 80 80) 50 'LightYellow)
(draw-solid-disk (make-posn 80 80) 40 'Yellow)

; house
(draw-solid-rect (make-posn 100 250) 400 300 'LemonChiffon)
(draw-solid-rect (make-posn 100 100) 400 150 'DarkSlateGray)

; door
(draw-solid-rect (make-posn 250 400) 100 150 'Crimson)
(draw-solid-disk (make-posn 325 500) 5 'Yellow)
(draw-solid-line (make-posn 250 400) (make-posn 300 350) 'Brown)
(draw-solid-line (make-posn 300 350) (make-posn 350 400) 'Brown)

; windows
(draw-solid-rect (make-posn 125 325) 100 100 'SteelBlue)
(draw-solid-line (make-posn 125 375) (make-posn 225 375) 'Black)
(draw-solid-line (make-posn 175 325) (make-posn 175 425) 'Black)
(draw-solid-rect (make-posn 150 150) 50 50 'SteelBlue)
(draw-solid-line (make-posn 150 175) (make-posn 200 175) 'Black)
(draw-solid-line (make-posn 175 150) (make-posn 175 200) 'Black)
(draw-solid-rect (make-posn 375 325) 100 100 'SteelBlue)
(draw-solid-line (make-posn 375 375) (make-posn 475 375) 'Black)
(draw-solid-line (make-posn 425 325) (make-posn 425 425) 'Black)
(draw-solid-rect (make-posn 400 150) 50 50 'SteelBlue)
(draw-solid-line (make-posn 400 175) (make-posn 450 175) 'Black)
(draw-solid-line (make-posn 425 150) (make-posn 425 200) 'Black)

; chimney
(draw-solid-rect (make-posn 450 50) 30 50 'Firebrick)
(draw-solid-rect (make-posn 445 40) 40 10 'DarkRed)

; mailbox
(draw-solid-rect (make-posn 155 500) 10 75 'White)
(draw-solid-rect (make-posn 135 490) 50 10 'Red)
(draw-solid-disk (make-posn 145 490) 10 'Red)
(draw-solid-disk (make-posn 150 490) 10 'Red)
(draw-solid-disk (make-posn 155 490) 10 'Red)
(draw-solid-disk (make-posn 160 490) 10 'Red)
(draw-solid-disk (make-posn 165 490) 10 'Red)
(draw-solid-disk (make-posn 170 490) 10 'Red)
(draw-solid-disk (make-posn 175 490) 10 'Red)
(draw-solid-disk (make-posn 145 500) 10 'Red)
(draw-solid-disk (make-posn 150 500) 10 'Red)
(draw-solid-disk (make-posn 155 500) 10 'Red)
(draw-solid-disk (make-posn 160 500) 10 'Red)
(draw-solid-disk (make-posn 165 500) 10 'Red)
(draw-solid-disk (make-posn 170 500) 10 'Red)
(draw-solid-disk (make-posn 175 500) 10 'Red)