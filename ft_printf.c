/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:53:55 by aakouhar          #+#    #+#             */
/*   Updated: 2023/11/27 12:02:37 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list list)
{
	int	len;

	if (c == '%')
		len = ft_putchar('%');
	else if (c == 'i' || c == 'd')
		len = ft_print_int(list);
	else if (c == 'c')
		len = ft_print_char(list);
	else if (c == 'u')
		len = ft_print_unsigned(list);
	else if (c == 's')
		len = ft_print_str(list);
	else if (c == 'x')
		len = ft_print_hexlow(list);
	else if (c == 'X')
		len = ft_print_hexup(list);
	else if (c == 'p')
		len = ft_paddress(list);
	else
	{
		len = ft_putchar('%');
		len += ft_putchar(c);
	}
	return (len);
}

int ft_printf(const char *str, ...)
{
    va_list list;
    int     i;
    int     len;

    i = 0;
    va_start(list, str);
    len = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            i++;
            if (str[i] == '\0')
                break ;
            else
                len += ft_check(str[i], list);
        }
        else
            len += ft_putchar(str[i]);
        i++;
    }
    va_end(list);
    return (len);
}