/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 21:47:47 by rdeias            #+#    #+#             */
/*   Updated: 2019/06/27 10:05:27 by rdeias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DO_OP_H
# define _DO_OP_H

# include <unistd.h>

int		ft_atoi(char *str);
int		check_op(char c);
int		is_space(char c);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
#endif
