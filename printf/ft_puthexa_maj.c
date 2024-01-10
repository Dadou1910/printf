/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_maj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 05:34:52 by abremont          #+#    #+#             */
/*   Updated: 2023/12/19 05:45:31 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int     ft_hexalen(unsigned int nb)
{
        int     i;

        i = 0;
        if (nb == 0)
                return (1);
        while (nb > 0)
        {
                nb /= 16;
                i++;
        }
        return (i);
}

static void    ft_putnbr_hexa_maj(unsigned int num)
{
        char    *base;

        base = "0123456789ABCDEF";
        if (num >= 16)
        {
                ft_putnbr_hexa_maj(num / 16);
                ft_putchar(base[num % 16]);
        }
        else
                ft_putchar(base[num]);
}

int     ft_puthexa_maj(unsigned int arg)
{
        unsigned int    nbr;

        nbr = (unsigned long long)arg;
        ft_putnbr_hexa_maj(nbr);
        return (ft_hexalen(nbr));
}

