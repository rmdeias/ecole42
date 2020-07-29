/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 00:39:30 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/19 13:23:50 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_BOOLEAN_H
# define _FT_BOOLEAN_H
# include <unistd.h>

typedef int	t_bool;
# define FALSE 0
# define TRUE 1
# define SUCCESS 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd numbero arguments.\n"
# define EVEN(nbr) nbr % 2 == 0
#endif
