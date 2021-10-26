/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:05:26 by ualcibar          #+#    #+#             */
/*   Updated: 2021/10/26 20:04:26 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		con_controller(char c, va_list arg);
int		ft_str_walk(const char *str, va_list arg);
int		ft_print_character(char c);
int		ft_print_string(char *c);
int		ft_print_nbr(int i);

#endif