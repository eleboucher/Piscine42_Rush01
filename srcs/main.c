/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 11:39:03 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/20 20:20:50 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
	char	*str;

	if((str = malloc(sizeof(char) * 2048)) == NULL)
		return (0);
	read(0, str, 2048);
	ft_print(str);
	free(str);
	return (0);
}
