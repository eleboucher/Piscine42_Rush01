/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 11:39:03 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/19 15:28:29 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
	char	*str;
	char	**array;
	int		i;

	i = -1;
	str = malloc(sizeof(char) * 2048);
	array = malloc(sizeof(char*) * 100);
	while (read(0, str, sizeof(str)) > 0)
	{
		array[++i] = malloc(sizeof(char*) * (ft_strlen(str) + 1));
		ft_strcpy(array[i],str);
		//printf("%s",array[i]);
	}
	ft_print(array);
	return (0);
}
