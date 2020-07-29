/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 10:27:30 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/27 11:04:52 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_tab_len(char **tab)
{
	int len;

	len = 0;
	while (*tab++)
		len++;
	return (len);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		size;
	int		i;
	char	*tmp;

	size = ft_tab_len(tab);
	while (size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}
