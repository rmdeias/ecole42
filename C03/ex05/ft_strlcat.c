/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 00:15:35 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/14 11:09:46 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[j] != '\0')
		j++;
	while (src[k] != '\0')
		k++;
	if (size > j)
	{
		while (src[i] != '\0' && i + j < size - 1)
		{
			dest[i + j] = src[i];
			i++;
		}
		dest[i + j] = '\0';
		return (j + k);
	}
	else
		return (size + k);
}
