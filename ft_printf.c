/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:13:51 by oamairi           #+#    #+#             */
/*   Updated: 2025/05/07 11:57:27 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int count;

	count = 0;
	va_start(list, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (!str[i + 1])
				return (-1);
			else if (str[i + 1] == '%')
				count += ft_putchar('%');
			else if (str[i + 1] == 'd' || str[i + 1] == 'i')
				count += ft_putnbr(va_arg(list, int));
			else if (str[i + 1] == 'c')
				count += ft_putchar(va_arg(list, int));
			else if (str[i + 1] == 's')
				count += ft_putstr(va_arg(list, char *));
			else if (str[i + 1] == 'x')
				count += ft_putnbr_hex(va_arg(list, int));
			else if (str[i + 1] == 'X')
				count += ft_putnbr_hex_upper(va_arg(list, int));
			else if (str[i + 1] == 'u')
				count += ft_putnbr_unsigned(va_arg(list, unsigned int));
			//else if (str[i + 1] == 'p')
			//	ft_putnbr_hex(va_arg(list, void *));
			i += 2;
		}
		else
		{
			count += ft_putchar(str[i]);
			i++;
		}
	}
	va_end(list);
	return (count);
}
