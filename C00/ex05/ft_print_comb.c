/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 23:06:49 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/06 14:09:15 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_global_putchar(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7' || b != '8' || c != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = a + 1;
	c = b + 1;
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					ft_global_putchar(a, b, c);
				}
				c++;
			}
			b++;
			c = 0;
		}
		a++;
		b = 0;
	}
}
