;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_cat.s                                           :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/10 17:02:37 by ebreda            #+#    #+#              ;
;    Updated: 2015/02/12 15:47:36 by ebreda           ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_cat

section .data
	buffer resb 256

section .text

_ft_cat:
	push rbp
	mov rbp, rsp

.read:
	push rdi
	lea rsi, [rel buffer]
	mov rdx, 256
	mov rax, 0x2000003
	syscall
	jc .end
	cmp rax, 0
	je .end
	mov rdi, 1
	mov rdx, rax
	mov rax, 0x2000004
	syscall
	pop rdi
	jmp .read

.end:
	mov rsp, rbp
	pop rbp
	ret
