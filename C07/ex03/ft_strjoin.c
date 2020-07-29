/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 12:37:36 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/18 21:46:04 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_size(int size, char **strs, char *sep)
{
	int i;
	int lengt;

	lengt = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		lengt = lengt + ft_strlen(strs[i]);
		i++;
	}
	lengt++;
	return (lengt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;

	i = -1;
	if (size == 0)
	{
		if (!(join = (char*)malloc(sizeof(char) * 1)))
			return (NULL);
		*join = '\0';
	}
	else
	{
		if (!(join = (char*)malloc(sizeof(char) * ft_size(size, strs, sep))))
			return (NULL);
		join[0] = '\0';
		while (++i < size)
		{
			join = ft_strcat(join, strs[i]);
			if (i == size - 1)
				join[ft_size(size, strs, sep) - 1] = '\0';
			else
				join = ft_strcat(join, sep);
		}
	}
	return (join);
}
