%macro print 2
mov rax,1
mov rdi,1
mov rsi,%1
mov rdx,%2
syscall
%endmacro

section .data
msg1 db 10,'Block contents before transfer',10,13
msg1len equ $-msg
msg2 db 10,'Block contents after transfer',10,13
msg2len equ $-msg
msg3 db 10,'SRC block',10,13
msg3len equ $-msg
msg4 db 10,'DEST block',10,13
msg4len equ $-msg

space db''
spacelen equ $-space

srcblk db 10h,20h,30,40h,50h
cnt equ 5
section .bss
ans resb 4

section .text

global _start

_start:
	print msg1,msg1len
	mov rsi,srcblk
	call disp_block

	mov rcx.05h
	mov rsi,srcblk
	mov rdi,destblk

	s1:
		mov al,[rsi]

		mov [rdi],al

		inc rsi
		inc rdi
		loop s1

		print msg2,msg2len
		mov rsi,destblk
		call disp_block
		mov rax,60
		xor rdi,rdi
		syscall

	dist_block:
		mov rbp,cnt

	back:
		mov al,[rsi]
		push rsi 
		call disp_8
		print space,1
		pop rsi
		inc rsi
		dec rbp
		jnz back
		ret

	disp_8:
		mov rsi,ans+1

		mov rcx,2

	back1:
		mov rdx,0
		mov rbx,16
		div rbx
		cmp dl,09h

		jbe add_30

	
		add dl,07h

	add_30:
		add dl,30h
		mov[rsi],dl
		dec rcx
		jnz back1
		print ans,2
		ret


