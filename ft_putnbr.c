/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:28:55 by oamairi           #+#    #+#             */
/*   Updated: 2025/05/05 14:32:10 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	ft_putnbr_hex_upper(int nb)
{
	
}

void	ft_putnbr_hex(int nb)
{
	char	c;
	char	base;

	if (nb == INT_MIN)
	{
		ft_putstr("-2147483648");
		return ;
	}
	base = {0,1,2,3,4,5,6,7,8,9,'a','b','c','d','e','f'};
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = base[nb % 10];
	ft_putchar(c);
}

void	ft_putnbr_unsigned(int nb)
{
	
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == INT_MIN)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	ft_putchar(c);
}