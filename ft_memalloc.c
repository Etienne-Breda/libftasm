/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:17:04 by ebreda            #+#    #+#             */
/*   Updated: 2015/01/28 17:56:59 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem_zone;

	if (size == 0)
		return (NULL);
	mem_zone = (void *)malloc(size);
	if (mem_zone)
		ft_bzero(mem_zone, size);
	return (mem_zone);
}
