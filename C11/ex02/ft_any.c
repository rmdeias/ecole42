/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 15:10:07 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/26 15:22:55 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			return (1);
		i++;
	}
	return (0);
}