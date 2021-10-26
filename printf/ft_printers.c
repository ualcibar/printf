/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:36:58 by ualcibar          #+#    #+#             */
/*   Updated: 2021/10/26 20:04:37 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_character(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_string(char *c)
{
	ft_putstr_fd(c, 1);
	return (ft_strlen(c));
}

int	ft_print_nbr(int c)
{
	int	len;

	len = 0;
	if (c == -2147483648)
		return (ft_print_string("-2147483648"));
	if (c < 0)
	{
		c = c * -1;
		len = ft_print_character('-');
	}
	if (c < 9)
		len += ft_print_nbr(c / 10);
	len += ft_print_character((c % 10) + 48);
	return (len);
}
