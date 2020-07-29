/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 20:09:53 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/24 21:26:38 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int		no_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (0);
		charset++;
	}
	return (1);
}

int		count_str(char *str, char *charset)
{
	int count_string;

	count_string = 0;
	while (*str)
	{
		if (no_charset(*str, charset))
		{
			count_string++;
			while (*str && no_charset(*str, charset))
				str++;
		}
		str++;
	}
	return (count_string);
}

int		c_char(char *str, char *charset)
{
	int count_letter;

	count_letter = 0;
	while (*str && no_charset(*str, charset))
	{
		count_letter++;
		str++;
	}
	return (count_letter);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		j;

	i = 0;
	if (!(split = (char**)malloc(sizeof(char*) * count_str(str, charset) + 1)))
		return (NULL);
	while (*str)
	{
		if (no_charset(*str, charset))
		{
			j = 0;
			if (!(split[i] = malloc(sizeof(char*) * c_char(str, charset) + 1)))
				return (NULL);
			while (*str && no_charset(*str, charset))
				split[i][j++] = *str++;
			split[i++][j] = '\0';
		}
		str++;
	}
	split[i] = 0;
	return (split);
}
