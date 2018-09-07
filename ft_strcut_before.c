/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut_before.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/06 12:08:35 by ebreda            #+#    #+#             */
/*   Updated: 2013/12/06 12:11:45 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strcut_before(char *str, size_t n)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)malloc(ft_strlen(str) - n);
	while (str[i + n])
	{
		tmp[i] = str[i + n];
		i++;
	}
	free(str);
	str = (char *)malloc(ft_strlen(tmp));
	i = 0;
	while (tmp[i])
	{
		str[i] = tmp[i];
		i++;
	}
	free(tmp);
	return ;
}
