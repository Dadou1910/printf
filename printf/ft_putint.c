/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:57:47 by abremont          #+#    #+#             */
/*   Updated: 2023/12/18 22:41:42 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
static int	ft_count(int nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
		count += 1;
	while (nbr != 0)
	{
		nbr /= 10;
		count += 1;
	}
	return (count);
}

static int	ft_int(int nbr)
{
	static char	digits[] = "0123456789";

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_int(nbr / 10);
	ft_putchar(digits[nbr % 10]);
	return (0);
}

int	ft_putint(int nbr)
{
	int	count;

	if (nbr == INT_MIN)
		return ft_putstr("-2147483648");
	count = ft_count(nbr);
	ft_int(nbr);
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nbr = INT_MIN;

	printf(" %d \n", ft_putint(nbr));

}*/
