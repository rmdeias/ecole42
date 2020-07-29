/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 21:58:12 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/27 10:03:39 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		do_op(int n1, int n2, char op)
{
	if (op == '+')
		ft_putnbr(n1 + n2);
	else if (op == '-')
		ft_putnbr(n1 - n2);
	else if (op == '*')
		ft_putnbr(n1 * n2);
	else if (op == '/')
	{
		if (op == '/' && n2 == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(n1 / n2);
	}
	else if (op == '%')
	{
		if (op == '%' && n2 == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(n1 % n2);
	}
	write(1, "\n", 1);
	return (0);
}

int		main(int ac, char **av)
{
	int n1;
	int n2;
	int op;

	if (ac == 4)
	{
		n1 = ft_atoi(av[1]);
		n2 = ft_atoi(av[3]);
		op = av[2][0];
		if (!check_op(op))
			write(1, "0\n", 2);
		else
		{
			do_op(n1, n2, op);
		}
	}
	return (0);
}
