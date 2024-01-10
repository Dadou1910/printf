/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:57:38 by abremont          #+#    #+#             */
/*   Updated: 2023/12/19 05:44:43 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putunsign(unsigned int nbr);
int	ft_putint(int nbr);
int	ft_putptr(void *addr);
int	ft_puthexa_min(unsigned int arg);
int	ft_puthexa_maj(unsigned int arg);
int	ft_printf(const char *str, ...);
#endif
