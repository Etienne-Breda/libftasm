/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 12:28:58 by ebreda            #+#    #+#             */
/*   Updated: 2014/04/27 17:41:52 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*fresh_cpy;
	size_t		i;

	fresh_cpy = (char *)malloc((len + 1) * sizeof(char));
	if (len && s)
	{
		i = 0;
		if (fresh_cpy && (len <= ft_strlen(s)))
		{
			while (s[start] && i < len)
			{
				fresh_cpy[i] = s[start];
				start++;
				i++;
			}
			fresh_cpy[i] = '\0';
		}
	}
	return (fresh_cpy);
}
