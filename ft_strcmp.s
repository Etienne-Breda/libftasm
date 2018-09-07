;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcmp.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/10 12:23:32 by ebreda            #+#    #+#              ;
;    Updated: 2015/02/17 18:51:55 by ebreda           ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

section .text
global _ft_strcmp

_ft_strcmp:
	cmp rdi, byte 0
	je .error
	cmp rsi, byte 0
	je .error
	push rdi
	push rsi
	push rbx
	xor rax, rax
	xor rbx, rbx

.opt:
	mov al, [rdi]
	mov bl, [rsi]
	cmp bl, byte 0
	je .end
	cmp bl, byte 0
	je .end
	cmp al, bl
	jne .end
	inc rsi
	inc rdi
	jmp .opt

.end:
	sub rax, rbx
	pop rbx
	pop rsi
	pop rdi
	ret

.error:
	mov rax, 1
	ret
