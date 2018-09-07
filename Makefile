# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 17:55:58 by ebreda            #+#    #+#              #
#    Updated: 2015/02/12 19:16:27 by ebreda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean leaks debug fclean re %.o

NAME = libft.a
FLAG = -Wall -Wextra -Werror -O3
DEBFLAG = -g
LEAKFLAG = --analyze;
SRCS = ft_bzero.s \
		ft_strlen.s \
		ft_strcat.s \
		ft_isalpha.s \
		ft_isdigit.s \
		ft_isalnum.s \
		ft_isascii.s \
		ft_isprint.s \
		ft_toupper.s \
		ft_tolower.s \
		ft_puts.s \
		ft_memset.s \
		ft_memcpy.s \
		ft_strdup.s \
		ft_strcmp.s \
		ft_cat.s

SRCC = ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isblank.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_strsplit_ft.c \
		ft_itoa.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_puttab.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_puttab_fd.c \
		ft_strcut_before.c \
		ft_putbase.c \
		ft_putbase_fd.c \
		ft_get_next_line.c \
		ft_printf.c \
		ft_tablen.c \
		ft_tabdup.c

SRCO = $(SRCC:.c=.o)
SRCO += $(SRCS:.s=.o)

all: $(NAME)

$(NAME): $(SRCO)
		ar rcs $(NAME) $(SRCO)

%.o: %.c
		gcc -o $@ -c $< $(FLAG)

%.o: %.s
		nasm -f macho64 -Wall $<

debug:		FLAG += $(DEBFLAG)
debug:		re

leaks:		FLAG += $(LEAKFLAG)
leaks:		re

clean:
		rm -f $(SRCO)

fclean: clean
		rm -f $(NAME)

re: fclean all
