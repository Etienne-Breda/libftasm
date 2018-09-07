/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 15:13:09 by ebreda            #+#    #+#             */
/*   Updated: 2015/01/28 18:40:08 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	i = 0;
	res = NULL;
	if (s && f)
	{
		res = (char*)malloc(ft_strlen(s) * sizeof(char));
		if (res)
		{
			while (s[i] != '\0')
			{
				res[i] = f(s[i]);
				++i;
			}
		}
	}
	return (res);
}
