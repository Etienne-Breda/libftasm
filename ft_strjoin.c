/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 12:28:58 by ebreda            #+#    #+#             */
/*   Updated: 2013/11/27 13:09:28 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	res = NULL;
	if (s1 && s2)
	{
		res = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (res)
		{
			ft_strcat(res, s1);
			ft_strcat(res, s2);
		}
	}
	return (res);
}
