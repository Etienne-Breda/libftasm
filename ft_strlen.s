;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strlen.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/04 16:43:59 by ebreda            #+#    #+#              ;
;    Updated: 2015/02/09 18:45:54 by ebreda           ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_strlen
section .text

_ft_strlen :
	mov rcx, -1
	mov rax, rdi
	xor al, al
	repnz scasb
	not rcx
	dec rcx
	mov rdi, rax
	mov rax, rcx
	ret

