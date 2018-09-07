/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 20:14:59 by ebreda            #+#    #+#             */
/*   Updated: 2013/12/19 20:14:59 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_putbase(long long int n, size_t b, short maj)
{
	short	neg;
	char	c;

	neg = (n < 0) ? ft_putchar('-') : 0;
	c = (maj) ? '7' : 'W';
	if (n < 0)
		n *= -1;
	if (n < (long long int)b)
	{
		if (n > 9)
			return (ft_putchar(c + n) + neg);
		else
			return (ft_putchar('0' + n) + neg);
	}
	else if ((n % b) > 9)
		return (ft_putbase(n / b, b, maj) + ft_putchar(c + n % b) + neg);
	else
		return (ft_putbase(n / b, b, maj) + ft_putchar('0' + n % b) + neg);
}
