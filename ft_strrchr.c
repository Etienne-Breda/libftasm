/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 12:12:22 by ebreda            #+#    #+#             */
/*   Updated: 2015/01/28 18:09:25 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = NULL;
	if (s != NULL)
	{
		while (*s)
		{
			if (*s == c)
				tmp = (char *)s;
			s++;
		}
		if (c == '\0')
			return ((char *)s);
	}
	return (tmp);
}
