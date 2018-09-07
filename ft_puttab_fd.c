/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/26 17:08:04 by ebreda            #+#    #+#             */
/*   Updated: 2014/04/26 17:08:04 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_puttab_fd(char **tab, int fd)
{
	int		i;
	size_t	res;

	i = 0;
	res = 0;
	while (tab[i] != '\0')
	{
		res += ft_putendl_fd(tab[i], fd);
		i++;
	}
	return (res);
}
