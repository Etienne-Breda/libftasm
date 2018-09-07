/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 20:14:59 by ebreda            #+#    #+#             */
/*   Updated: 2013/12/29 21:18:36 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_putbase_fd(long long int n, size_t b, short m, int fd)
{
	short	p;
	char	c;
	size_t	i;

	p = (n < 0) ? ft_putchar_fd('-', fd) : 0;
	c = (m) ? '7' : 'W';
	i = 0;
	if (n < 0)
		n *= -1;
	if (n < (long long int)b)
	{
		if (n > 9)
			return (ft_putchar_fd(c + n, fd) + p);
		else
			return (ft_putchar_fd('0' + n, fd) + p);
	}
	else if ((n % b) > 9)
		i = ft_putbase_fd(n / b, b, m, fd) + ft_putchar_fd(c + n % b, fd) + p;
	else
		i = ft_putbase_fd(n / b, b, m, fd) + ft_putchar_fd('0' + n % b, fd) + p;
	return (i);
}
