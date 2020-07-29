/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 13:09:29 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/26 15:07:18 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int *map;
	int i;

	map = NULL;
	i = 0;
	if (!(map = malloc(sizeof(int) * lenght + 1)))
		return (NULL);
	while (i < lenght)
	{
		map[i] = (*f)(tab[i]);
		i++;
	}
	return (map);
}
