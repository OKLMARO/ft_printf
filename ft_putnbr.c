/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:28:55 by oamairi           #+#    #+#             */
/*   Updated: 2025/05/07 11:56:51 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex_upper(int nb)
{
	char	c;
	char	*base;
	int		res;

	res = 0;
	if (nb == INT_MIN)
		return (ft_putstr("-80000000"));
	base = ft_strdup("0123456789ABCDEF");
	if (!base)
		return (0);
	if (nb < 0)
	{
		res += ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 16)
		res += ft_putnbr_hex_upper(nb / 16);
	c = base[nb % 16];
	res += ft_putchar(c);
	free(base);
	return (res);
}

int	ft_putnbr_hex(int nb)
{
	char	c;
	char	*base;
	int		res;

	res = 0;
	if (nb == INT_MIN)
		return (ft_putstr("-80000000"));
	base = ft_strdup("0123456789abcdef");
	if (!base)
		return (0);
	if (nb < 0)
	{
		res += ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 16)
		res += ft_putnbr_hex(nb / 16);
	c = base[nb % 16];
	res += ft_putchar(c);
	free(base);
	return (res);
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	char	c;
	int		res;

	res = 0;
	if (nb >= 10)
		res += ft_putnbr_unsigned(nb / 10);
	c = nb % 10 + '0';
	return (ft_putchar(c) + res);
}

int	ft_putnbr(int nb)
{
	char	c;
	int		res;

	res = 0;
	if (nb == INT_MIN)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		res += ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
		res += ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	return (ft_putchar(c) + res);
}
