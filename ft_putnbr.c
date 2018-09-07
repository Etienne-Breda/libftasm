/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 19:23:38 by ebreda            #+#    #+#             */
/*   Updated: 2013/11/21 19:23:59 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_putnbr(int n)
{
	int		minus;

	minus = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	else
	{
		if (n < 0)
		{
			minus = ft_putchar('-');
			n = n * -1;
		}
		if (n < 10)
			return (ft_putchar('0' + n) + minus);
		else
			return (ft_putnbr(n / 10) + ft_putchar('0' + n % 10) + minus);
	}
}
