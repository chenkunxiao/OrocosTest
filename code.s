	.file	"code.c"
	.intel_syntax noprefix
	.text
	.globl	add
	.type	add, @function
add:
.LFB39:
	.cfi_startproc
	add	edi, esi
	lea	eax, [rdi+rdx]
	ret
	.cfi_endproc
.LFE39:
	.size	add, .-add
	.globl	sample_1
	.type	sample_1, @function
sample_1:
.LFB40:
	.cfi_startproc
	add	rsi, QWORD PTR [rdi]
	movsx	rdx, edx
	lea	rax, [rsi+rdx]
	mov	QWORD PTR [rdi], rax
	ret
	.cfi_endproc
.LFE40:
	.size	sample_1, .-sample_1
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
