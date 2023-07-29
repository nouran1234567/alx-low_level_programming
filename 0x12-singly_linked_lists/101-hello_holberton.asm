section         .text
	global   main
	extern   printf

main:
	xor   eax, eax
	mov   edi, format
	mov   eax, 0
	call printf  
	ret

format: db `Hello, Holberton\n`,0
