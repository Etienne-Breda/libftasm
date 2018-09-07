/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebreda <ebreda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/06 11:15:52 by ebreda            #+#    #+#             */
/*   Updated: 2014/05/06 11:15:52 by ebreda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_tabdup(char **tab)
{
	char	**res;
	int		i;

	i = 0;
	res = (char **)malloc(sizeof(char *) * (ft_tablen(tab) + 1));
	while (tab[i] != '\0')
	{
		res[i] = ft_strdup(tab[i]);
		i++;
	}
	res[i] = (char *)malloc(sizeof(char));
	res[i] = '\0';
	return (res);
}
