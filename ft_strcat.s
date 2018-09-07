;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcat.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/04 16:43:59 by ebreda            #+#    #+#              ;
;    Updated: 2015/02/09 14:31:00 by ebreda           ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global _ft_strcat
section .text

_ft_strcat :
	mov rax, rdi

first:
	cmp [rdi], byte 0
	je next
	inc rdi
	jmp first

next:
	cmp [rsi], byte 0
	je end
	mov r11, [rsi]
	mov [rdi], r11
	inc rsi
	inc rdi
	jmp next

end:
	mov [rdi], byte 0
	ret
