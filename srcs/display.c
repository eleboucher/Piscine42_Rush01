/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 14:16:46 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/19 19:20:39 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	typefive(char *array)
{
	write(1, "[colle-02] [", 12);
	ft_putnbr(array_width(array));
	write(1, "] [", 3);
	ft_putnbr(array_height(array));
	write(1, "] || [", 6);
	write(1, "[colle-03] [", 12);
	ft_putnbr(array_width(array));
	write(1, "] [", 3);
	ft_putnbr(array_height(array));
	write(1, "] || [", 6);
	write(1, "[colle-04] [", 12);
	ft_putnbr(array_width(array));
	write(1, "] [", 3);
	ft_putnbr(array_height(array));
	write(1, "]\n", 2);
}

void	typesix(char *array)
{
	write(1, "[colle-03] [", 12);
	ft_putnbr(array_width(array));
	write(1, "] [", 3);
	ft_putnbr(array_height(array));
	write(1, "] || [", 6);
	write(1, "[colle-04] [", 12);
	ft_putnbr(array_width(array));
	write(1, "] [", 3);
	ft_putnbr(array_height(array));
	write(1, "]\n", 3);
}

void	ft_print(char *array)
{
	int type;

	type = colle_type(array);
	if (type == -1)
	{
		write(1, "aucune\n", 7);
		return ;
	}
	if (type < 5)
	{
		write(1, "[colle-0", 8);
		ft_putnbr(type);
		write(1, "] [", 3);
		ft_putnbr(array_width(array));
		write(1, "] [", 3);
		ft_putnbr(array_height(array));
		write(1, "]\n", 2);
	}
	if (type == 5)
		typefive(array);
	if (type == 6)
		typesix(array);
}
