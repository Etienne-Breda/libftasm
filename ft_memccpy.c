/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:39:47 by ebreda            #+#    #+#             */
/*   Updated: 2013/11/23 12:43:44 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*dest;
	const char	*src;
	char		ch;

	dest = s1;
	src = s2;
	while (n--)
	{
		ch = *src++;
		*dest++ = ch;
		if (ch == (char)c)
			return (dest);
	}
	return (NULL);
}
