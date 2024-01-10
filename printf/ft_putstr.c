/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:28:16 by abremont          #+#    #+#             */
/*   Updated: 2023/12/18 22:15:35 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_count(char *str)
{
	size_t	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (ft_putstr("(null)"));
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (ft_count(str));
}
/*
#include <stdio.h>
int	main(void)
{
//	char str[] = "abcdegfh\n";
	printf("%d\n", ft_putstr(NULL));
}
*/
