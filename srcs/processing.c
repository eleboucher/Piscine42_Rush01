/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 13:23:40 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/19 19:23:42 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		array_width(char *array)
{
	int i;

	i = 0;
	while(array[i] != '\n' && array[i])
		i++;
	return (i);
}

int		array_height(char *array)
{
	int i;
	int k;

	i = -1;
	k = 0;
	while(array[++i])
	{
		if(array[i] == '\n')
			k++;
	}
	return (k);
}

int		colle_type(char *array)
{
	int width;
	int height;
	
	width = array_width(array);
	height = array_height(array);
	if (array[0] == 'o')
		return (0);
	else if (array[0] == '/')
		return (1);
	else if (height == 1 && width == 1	&& array[0] == 'A')
		return (5);
	else if (array[0] == 'A')
	{
		if (height == 1)
			return (6);
		if (array[width] == 'A')
			return (2);
		if (array[ft_strlen(array) - 2] == 'C')
			return (3);
		else if (array[ft_strlen(array) - 2] == 'A')
			return (4);
	}
	return (-1);
}
