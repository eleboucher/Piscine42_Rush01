/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_ult.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 14:18:23 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/19 15:18:24 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write (1,&c,1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1,str,sizeof(str));
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 10)
		ft_putchar(nb + '0');
}

char	*ft_strcpy(char *dest, char *src)
{
	char *cpy;

	cpy = dest;
	while (*src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (cpy);
}
