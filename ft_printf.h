/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:36:45 by aakouhar          #+#    #+#             */
/*   Updated: 2023/11/27 12:48:34 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *str, ...);
int ft_print_str(va_list list);
int ft_print_int(va_list list);
int ft_print_hexup(va_list list);
int ft_print_hexlow(va_list list);
int ft_print_char(va_list list);
int ft_putchar(char c);
int ft_print_unsigned(va_list list);
int ft_paddress(va_list list);

#endif
