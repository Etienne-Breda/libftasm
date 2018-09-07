;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strdup.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/09 18:46:35 by ebreda            #+#    #+#              ;
;    Updated: 2015/02/09 19:22:08 by ebreda           ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_strdup
section .text

extern _malloc
extern _ft_strlen

_ft_strdup:
	push rdi
	call _ft_strlen
	push rax
	mov rcx, rax
	mov rdi, rcx
	call _malloc
	pop rcx
	pop rsi
	mov rdi, rax
	rep movsb
	ret
