/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:19:48 by oamairi           #+#    #+#             */
/*   Updated: 2025/05/07 11:41:27 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(int argc, char const *argv[])
{
	char *test = "bonjour";
	ft_printf("test %p\n", test);
	printf("test %p\n", test);
	return 0;
}
