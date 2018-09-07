/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 09:29:05 by ebreda            #+#    #+#             */
/*   Updated: 2013/11/28 09:32:28 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_putstr_fd(char const *s, int fd)
{
	int		nbr;

	if (s)
	{
		nbr = ft_strlen(s);
		return (write(fd, s, nbr));
	}
	else
		return (ft_putstr_fd("(null)", fd));
}
