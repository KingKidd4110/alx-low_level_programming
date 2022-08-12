	extern printf	;	call the printf function
	
	section .data	;	initialise data section

msg db 'Hello, Holberton', 0  ;	message to be printed

fmt:	    	db "%s", 10, 0	; format

	section .text	;	code text
	global main	;	code
main			;	entry point label

	push rbp	;	push value itno stack
	mov rdi,fmt	;	format
	mov rsi,msg	;	store values
	mov rax,0	;	assign 64bit register

	call printf	;	calls c printf function from c

	pop rbp		;	restore stack from push instruction
	mov rax,0	;	return value from 64bit system

	ret	

