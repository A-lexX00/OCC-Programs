addi $10, $zero, 0x10010000
addi $t1, $zero, 0x00800001
addi $t2, $zero, 3
mtc1 $t1, $f0
add.s $f1, $f0, $f0
add.s $f2, $f1, $f0
s.s $f0, 0($t0)
s.s $f1, 4($t0)
s.s $f2, 8($t0)
move $a0, $t0
move $a1, $t2
sub.s $f0, $f0, $f0
sub.s $f1, $f1, $f1
sub.s $f2, $f2, $f2

jal AvgArray

j Around

AvgArray:
	mtc1 $a1, $f1
	cvt.s.w $f2, $f2
loop:	l.s $f0, 0($a0)
	add.s $f1, $f1, $f0
	subi $a1, $a1, 1
	addi $a0, $a0, 4
	bne $a1, $zero, loop
	div.s $f3, $f1, $f2
	mfc1 $s0, $f3
	jr $ra
	
SumArray:

Around: