;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_tolower.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/09 15:42:54 by ebreda            #+#    #+#              ;
;    Updated: 2015/02/09 15:43:50 by ebreda           ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_tolower
section .text

_ft_tolower:
	cmp rdi, 'A'
	jl .false
	cmp rdi, 'Z'
	jle .true

.false:
	mov rax, rdi
	ret

.true:
	add rdi, 32
	mov rax, rdi
	ret
