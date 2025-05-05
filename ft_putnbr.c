/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:28:55 by oamairi           #+#    #+#             */
/*   Updated: 2025/05/05 22:57:46 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex_upper(int nb)
{
	char	c;
	char	*base;

	if (nb == INT_MIN)
	{
		ft_putstr("-80000000");
		return ;
	}
	base = ft_strdup("0123456789ABCDEF");
	if (!base)
		return (0);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 16);
	c = base[nb % 16];
	ft_putchar(c);
	free(base);
}

void	ft_putnbr_hex(int nb)
{
	char	c;
	char	*base;

	if (nb == INT_MIN)
	{
		ft_putstr("-80000000");
		return ;
	}
	base = ft_strdup("0123456789abcdef");
	if (!base)
		return (0);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 16);
	c = base[nb % 16];
	ft_putchar(c);
	free(base);
}

void	ft_putnbr_unsigned(unsigned int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	ft_putchar(c);
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
