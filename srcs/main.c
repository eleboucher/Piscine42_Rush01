/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 11:39:03 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/19 18:41:08 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
	char	*str;

	str = malloc(sizeof(char) * 2048);
	read(0, str, 2048);
	str[ft_strlen(str)] = '\0';
	ft_print(str);
	return (0);
}
