/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:04:26 by ualcibar          #+#    #+#             */
/*   Updated: 2021/10/26 20:04:47 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	con_controller(char c, va_list arg)
{
	int	result;

	result = 0;
	if (c == 'c')
		result = ft_print_character(va_arg(arg, int));
	else if (c == 's')
		result = ft_print_string(va_arg(arg, char *));
	else if (c == 'd')
		result = ft_print_nbr(va_arg(arg, int));
	else if (c == '%')
		result = ft_print_character('%');
	else if (c == 'i')
		result = ft_print_character('%');
	/*else if (c == 'i')
		result = ft_print_charcter();
	else if (c == 'u')
		result = ft_print_charcter();
	else if (c == 'p')
		result = ft_print_pointer();	*/
	return (result);
}

int	ft_str_walk(const char *str, va_list arg)
{
	int	cont;
	int	print;

	cont = 0;
	print = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] == '%')
		{
			con_controller(str[cont + 1], arg);
			cont++;
		}
		else if (str[cont] != '%')
		{
			ft_putchar_fd(str[cont], 1);
			print++;
		}
		cont++;
	}
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	const char	*save;
	int			char_count;

	save = ft_strdup(str);
	char_count = 0;
	va_start(args, str);
	char_count += ft_str_walk(save, args);
	va_end(args);
	free((char *)save);
	return (char_count);
}
