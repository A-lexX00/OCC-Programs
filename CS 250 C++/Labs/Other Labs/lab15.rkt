;Banh, Alex
;
;CS A250
;May 7, 2018
;
;Lab 1

#lang racket

; 1)
(define func1
  (lambda ( x y )
    ( cond
       [(empty? x) (cons x y)]
       [else (first x)])))

; 2)
(define new-list
  (lambda (w)
    ( cond
      [(empty? w) "No elements in list"]
      [(empty? (rest w)) "Only one element in list"]
      [(empty? (rest (rest w))) "Only two elements in list"]
      [else (cons (first (rest (rest w))) (cons (first (rest w)) (cons (first w) (rest (rest (rest w))))))])))

; 3) '(a a a)


; 4) '(a b b c)