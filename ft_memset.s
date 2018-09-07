;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_memset.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/09 17:24:58 by ebreda            #+#    #+#              ;
;    Updated: 2015/02/09 18:40:27 by ebreda           ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_memset
section .text

_ft_memset:
	push rdi
	mov rax, rsi
	mov rcx, rdx
	rep stosb
	pop rdi
	mov rax, rdi
	ret
