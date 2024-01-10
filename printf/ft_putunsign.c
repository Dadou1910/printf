/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:52:22 by abremont          #+#    #+#             */
/*   Updated: 2023/12/18 21:10:27 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(unsigned int nbr)
{
	size_t	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= 10;
		count += 1;
	}
	return (count);
}

int	ft_putunsign(unsigned int nbr)
{
	static char	digits[] = "0123456789";

	if (nbr > 9)
		ft_putunsign(nbr / 10);
	write(STDOUT_FILENO, &digits[nbr % 10], 1);
	return (ft_count(nbr));
}
