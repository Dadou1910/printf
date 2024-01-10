/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:52:11 by abremont          #+#    #+#             */
/*   Updated: 2023/12/19 05:55:36 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_count(unsigned long long nbr)
{
	size_t	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= 16;
		count += 1;
	}
	return (count);
}

static void	ft_ptr(unsigned long long nbr)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr >= 16)
		ft_ptr(nbr / 16);
	ft_putchar(base[nbr % 16]);
}

int	ft_putptr(void *addr)
{	
	if (!addr)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	ft_ptr((unsigned long long)addr);
	return (ft_count((unsigned long long)addr) + 2);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*addr;
	addr = "01234567899";

	printf("%p\n",addr);
	ft_putptr((void *)addr);
	printf("%c", '\n');
	printf("%d", ft_putptr((void *)addr));
}*/
