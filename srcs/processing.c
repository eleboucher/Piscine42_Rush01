/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 13:23:40 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/19 15:29:47 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		array_width(char **array)
{
	int i;

	i = 0;
	while(array[0][i] != '\n')
		i++;
	return (i);
}

int		array_height(char **array)
{
	int i;

	i = 0;
	while(array[i])
		i++;
	return (i + 1);
}

int		colle_type(char **array)
{
	int width;
	int height;

	width = array_width(array);
	height = array_height(array);
	if (array[0][0] == 'o')
		return (0);
	else if (array[0][0] == '/')
		return (1);
	else if (height == 1 && width == 1	&& array[0][0] == 'A')
		return (5);
	else if (array[0][0] == 'A')
	{
		if (array[0][width] == 'A')
			return (2);
		if (height == 1)
			return (6);
		if (array[height][0] == 'A')
			return (3);
		else if (array[height][0] == 'C')
			return (4);
	}
	return (-1);
}
