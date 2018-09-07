/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@strtudent.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 12:28:58 by ebreda            #+#    #+#             */
/*   Updated: 2013/11/27 13:09:28 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char		*tmp;
	size_t		len;

	if (s == NULL)
		return (NULL);
	tmp = (char *)s;
	while (ft_isblank(*tmp))
		tmp++;
	len = ft_strlen(tmp);
	if (len)
	{
		while (ft_isblank(tmp[--len]) || *tmp == '\0')
			;
		tmp = ft_strsub(tmp, 0, (len + 1));
	}
	else
		tmp = ft_strnew(1);
	return (tmp);
}
