/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:37:32 by abremont          #+#    #+#             */
/*   Updated: 2023/12/19 05:39:17 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print(char found, va_list args)
{
	if (found == '%')
		return (ft_putchar('%'));
	if (found == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (found == 'i' || found == 'd')
		return (ft_putint(va_arg(args, int)));
	if (found == 's')
		return (ft_putstr(va_arg(args, char*)));
	if (found == 'p')
		return (ft_putptr(va_arg(args, void*)));
	if (found == 'u')
		return (ft_putunsign(va_arg(args, unsigned int)));
	if (found == 'x')
		return (ft_puthexa_min(va_arg(args, unsigned int)));
	if (found == 'X')
		return (ft_puthexa_maj(va_arg(args, unsigned int)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_print(str[i], args);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
/*
#include <stdio.h>
#include <limits.h>

int main()
{
	int n = printf("%lx\n" ,1111111111111);
	printf("%d\n", n);
	ft_printf("\n%d\n", ft_puthexa(1111111111111, 'x'));
}*/
