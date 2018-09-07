;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isascii.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/09 15:25:19 by ebreda            #+#    #+#              ;
;    Updated: 2015/02/09 15:29:30 by ebreda           ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isascii
section .text

_ft_isascii:
	cmp rdi, 0
	jl .false
	cmp rdi, 127
	jle .true

.false:
	xor rax, rax
	ret

.true:
	mov rax, 1
	ret
