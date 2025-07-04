/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosman <aosman@42wolfsburg.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 20:31:10 by aosman            #+#    #+#             */
/*   Updated: 2025/06/15 21:10:35 by aosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"


static int	ft_get_params(char param, va_list args)
{
	//int	res;

	//res = 0;
	if (param == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (param == 'd' || param == 'i')
	{
		ft_putnbr_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (param == 's')
	{
		ft_putstr_fd(va_arg(args, char *), 1);
		return (1);
	}	
	return (0);
}
// Variadic function to print given arguments
int	ft_printf(const char *str, ...)
{
    va_list args;
	int		i;
	int		count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			count += ft_get_params(str[i + 1], args);
			i += 2;
		}

		else
		{
			ft_putchar_fd(str[i], 1);
			count++;
			i++;
		}
	}
    va_end(args);
	return (count);
}
