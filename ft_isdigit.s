;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isdigit.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/09 15:23:04 by ebreda            #+#    #+#              ;
;    Updated: 2015/02/09 15:29:33 by ebreda           ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isdigit
section .text

_ft_isdigit:
	cmp rdi, '0'
	jl .false
	cmp rdi, '9'
	jle .true

.false:
	xor rax, rax
	ret

.true:
	mov rax, 1
	ret
