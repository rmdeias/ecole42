/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 21:53:01 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/27 10:04:15 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		check_op(char c)
{
	if (c == '+' || c == '/' || c == '-' || c == '*' || c == '%')
		return (1);
	else
		return (0);
}

int		is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
			|| c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int res;
	int neg;

	res = 0;
	neg = 1;
	while (is_space(*str) && *str)
		str++;
	while ((*str == '+' || *str == '-') && *str)
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while ((*str >= '0' && *str <= '9') && *str)
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	res *= neg;
	return (res);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
