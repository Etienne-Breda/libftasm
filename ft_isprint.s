;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isprint.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/09 15:27:31 by ebreda            #+#    #+#              ;
;    Updated: 2015/02/09 15:29:26 by ebreda           ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_isprint
section .text

_ft_isprint:
	cmp rdi, ' '
	jl .false
	cmp rdi, '~'
	jle .true

.false:
	xor rax, rax
	ret

.true:
	mov rax, 1
	ret
