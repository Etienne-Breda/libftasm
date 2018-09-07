/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:41:42 by ebreda            #+#    #+#             */
/*   Updated: 2015/01/26 17:38:28 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(to_find);
	while (str[i] != '\0' || !i)
	{
		if (ft_strncmp(to_find, &str[i], len) == 0)
			return ((char *)(&str[i]));
		++i;
	}
	return (NULL);
}
