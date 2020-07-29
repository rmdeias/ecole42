/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:42:30 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/18 23:56:18 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;
	int valeur;

	valeur = 0;
	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	valeur = max - min;
	if ((tab = malloc(sizeof(int) * valeur)))
	{
		while (i < valeur)
			tab[i++] = min++;
		*range = tab;
		return (i);
	}
	return (-1);
}
