/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 17:35:53 by ebreda            #+#    #+#             */
/*   Updated: 2013/12/18 21:03:57 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

short		ft_isflag(size_t c)
{
	if (c == ' ')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else if (c == '-')
		return (1);
	else if (c == '+')
		return (1);
	else if (c == '.')
		return (1);
	else if (c == '*')
		return (1);
	else if (c == '#')
		return (1);
	else
		return (0);
}

size_t		ft_flag(char **str, va_list *ap)
{
	size_t		nbr;

	nbr = 0;
	while (ft_isflag(*(*str + 1)))
		(*str)++;
	if (*(*str + 1) == 'd' || *(*str + 1) == 'i')
		nbr += ft_putnbr(va_arg(*ap, int));
	else if (*(*str + 1) == 'u')
		nbr += ft_putbase(va_arg(*ap, size_t), 10, 0);
	else if (*(*str + 1) == 'X')
		nbr += ft_putbase(va_arg(*ap, size_t), 16, 1);
	else if (*(*str + 1) == 'x')
		nbr += ft_putbase(va_arg(*ap, size_t), 16, 0);
	else if (*(*str + 1) == 'o')
		nbr += ft_putbase(va_arg(*ap, size_t), 8, 0);
	return (nbr);
}

size_t		ft_flag2(char **str, va_list *ap)
{
	size_t		nbr;

	nbr = 0;
	if (*(*str + 1) == 'b')
		nbr += ft_putbase(va_arg(*ap, size_t), 2, 0);
	else if (*(*str + 1) == 'c')
		nbr += ft_putchar(va_arg(*ap, int));
	else if (*(*str + 1) == 's')
		nbr += ft_putstr(va_arg(*ap, char *));
	else if (*(*str + 1) == 'p')
		nbr += ft_putstr("0x") + ft_putbase(va_arg(*ap, size_t), 16, 0);
	else if (*(*str + 1) == 'd' || *(*str + 1) == 'i' || *(*str + 1) == 'u' ||
			*(*str + 1) == 'x' || *(*str + 1) == 'X' || *(*str + 1) == 'o')
		;
	else
		nbr += ft_putchar(*(*str + 1));
	(*str)++;
	return (nbr);
}

size_t		ft_printf(char *str, ...)
{
	va_list		ap;
	int			nbr;

	va_start(ap, str);
	nbr = 0;
	while (*str)
	{
		if (*str == '%')
		{
			nbr += ft_flag(&str, &ap);
			nbr += ft_flag2(&str, &ap);
		}
		else
			nbr += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (nbr);
}
