section		.text	
	global start
	extern printf

start:
	mov		edi, msg
	mov		eax, 0
	call	printf

section		.data
	msg db 'Hello, Holberton', 0xa, 0
