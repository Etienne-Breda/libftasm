/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:41:42 by ebreda            #+#    #+#             */
/*   Updated: 2015/01/28 17:51:41 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int		ptr;
	int		i;
	int		y;
	size_t	len;

	if (!*to_find)
		return ((char *)str);
	len = ft_strlen(to_find) - 1;
	i = 0;
	while (str[i] && n > len)
	{
		y = 0;
		ptr = i;
		while (str[ptr] == to_find[y] && to_find[y] && str[ptr])
		{
			++y;
			++ptr;
		}
		if (to_find[y] == '\0')
			return ((char *)str + i);
		--n;
		++i;
	}
	return (NULL);
}
