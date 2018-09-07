/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 09:24:05 by ebreda            #+#    #+#             */
/*   Updated: 2013/11/28 09:32:18 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_fd(int n, int fd)
{
	int		p;
	int		i;

	p = 0;
	i = 0;
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	else
	{
		if (n < 0)
		{
			p = ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n < 10)
			i = ft_putchar_fd('0' + n, fd) + p;
		else
			i = ft_putnbr_fd(n / 10, fd) + ft_putchar_fd('0' + n % 10, fd) + p;
		return (i);
	}
}
