;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_bzero.s                                         :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/04 16:43:59 by ebreda            #+#    #+#              ;
;    Updated: 2015/02/04 16:44:24 by ebreda           ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_bzero
section .text

_ft_bzero:
	cmp rsi, byte 0
	je end
	mov [rdi], byte 0
	inc rdi
	dec rsi
	jmp _ft_bzero

end:
	ret
