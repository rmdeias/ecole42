/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 15:15:44 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/19 21:06:49 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "ft_stock_str.h"

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char				*ft_strdup(char *src)
{
	char *dup;

	if (!(dup = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*full_strs;

	i = 0;
	if (!(full_strs = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		full_strs[i].copy = ft_strdup(av[i]);
		if (full_strs[i].copy == NULL)
			return (NULL);
		full_strs[i].size = ft_strlen(av[i]);
		full_strs[i].str = av[i];
		i++;
	}
	full_strs[i].str = 0;
	return (full_strs);
}
