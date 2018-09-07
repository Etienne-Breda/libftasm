/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 12:45:49 by ebreda            #+#    #+#             */
/*   Updated: 2013/11/26 16:10:48 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_get_size(int n, int neg)
{
	int		size;

	size = (n == 0) ? 1 : 0;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	if (neg)
		size++;
	return (size);
}

static void		ft_norme_loop(char *str, int *n, int *size)
{
	while ((*n) != 0)
	{
		str[(*size)] = (*n) % 10 + '0';
		(*n) = (*n) / 10;
		(*size)--;
	}
}

char			*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = (n < 0) ? 1 : 0;
	n = (n < 0) ? -n : n;
	size = ft_get_size(n, neg);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str)
	{
		str[size] = '\0';
		size--;
		str[size] = '0';
		ft_norme_loop(str, &n, &size);
		str[0] = neg ? '-' : str[0];
	}
	return (str);
}
