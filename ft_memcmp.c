/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 14:34:42 by ebreda            #+#    #+#             */
/*   Updated: 2013/11/23 14:40:46 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*temp1;
	const unsigned char		*temp2;
	size_t					i;

	temp1 = s1;
	temp2 = s2;
	i = 0;
	while (i < n)
	{
		if (*temp1 != *temp2)
			return (*temp1 - *temp2);
		else
		{
			temp1++;
			temp2++;
		}
		i++;
	}
	return (0);
}
