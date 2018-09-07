;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isalpha.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/09 14:33:11 by ebreda            #+#    #+#              ;
;    Updated: 2015/02/09 15:29:43 by ebreda           ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isalpha
section .text

_ft_isalpha:
	cmp rdi, 'A'
	jl .false
	cmp rdi, 'Z'
	jle .true
	cmp rdi, 'a'
	jl .false
	cmp rdi, 'z'
	jle .true

.false:
	xor rax, rax
	ret

.true:
	mov rax, 1
	ret
