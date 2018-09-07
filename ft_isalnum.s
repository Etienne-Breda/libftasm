;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isalnum.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/09 15:19:33 by ebreda            #+#    #+#              ;
;    Updated: 2015/02/09 15:29:38 by ebreda           ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isalnum
section .text

_ft_isalnum:
	cmp rdi, '0'
	jl .false
	cmp rdi, '9'
	jle .true
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
