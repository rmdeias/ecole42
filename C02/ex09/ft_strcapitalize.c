/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 14:59:49 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/09 18:07:01 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9'))
				str[i] = str[i] + 32;
		}
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		else if (str[i] < '0' || (str[i] < 'A' && str[i] > '9')
				|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
		{
			if ((str[i + 1] >= 'a' && str[i + 1] <= 'z'))
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}