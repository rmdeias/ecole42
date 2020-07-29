/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 22:12:59 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/15 21:33:53 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int f;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		f = 0;
		if (str[i] == to_find[f])
		{
			j = i;
			while (str[i] == to_find[f])
			{
				if (to_find[f + 1] == '\0')
					return (&str[j]);
				f++;
				i++;
			}
			i = j;
		}
		i++;
	}
	return (0);
}
