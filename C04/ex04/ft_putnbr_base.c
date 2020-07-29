/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kk.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:09:33 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/13 10:26:12 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int long nbr, char *base)
{
	write(1, &base[nbr], 1);
}

void	la_base(int long nbr, char *base, int long taille)
{
	if (nbr >= taille)
		la_base(nbr / taille, base, taille);
	ft_putchar(nbr % taille, base);
}

int		base_verif(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i;
		while (j >= 0)
		{
			j--;
			if (base[i] == base[j])
				return (0);
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	int long	n;

	n = nbr;
	i = base_verif(base);
	if (i > 1)
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = n * -1;
		}
		la_base(n, base, i);
	}
}
