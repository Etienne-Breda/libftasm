;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_toupper.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/09 15:38:03 by ebreda            #+#    #+#              ;
;    Updated: 2015/02/09 15:48:46 by ebreda           ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_toupper
section .text

_ft_toupper:
	mov rax, rdi
	cmp rax, 'a'
	jl .false
	cmp rax, 'z'
	jle .true

.false:
	ret

.true:
	sub rax, 32
	ret
