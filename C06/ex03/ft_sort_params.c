/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 10:54:53 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/22 13:59:32 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	print_param(int ar, char **av)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < ar)
	{
		while (av[i][j] != '\0')
		{
			ft_putchar(av[i][j]);
			j++;
		}
		j = 0;
		i++;
		ft_putchar('\n');
	}
}

int		main(int ar, char **av)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i < ar)
	{
		while (j < ar)
		{
			if (ft_strcmp(av[j], av[i]) > 0)
			{
				temp = av[i];
				av[i] = av[j];
				av[j] = temp;
			}
			j++;
		}
		j = 1;
		i++;
	}
	print_param(ar, av);
	return (0);
}
