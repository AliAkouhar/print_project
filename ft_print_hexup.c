/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:33:10 by aakouhar          #+#    #+#             */
/*   Updated: 2023/11/27 12:54:39 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_print(unsigned int num)
{
    char *hex;

    hex = "0123456789ABCDEF";
    if (num < 16)
        ft_putchar(hex[num]);
    else
    {
        ft_print(num / 16);
        ft_print(num % 16);
    }
}

int ft_print_hexup(va_list list)
{
    unsigned int    num;
    int             len;

    num = va_arg(list, unsigned int);
    ft_print(num);
    len = 0;
    if (num == 0)
		len++;
	while (num != 0)
	{
		len++;
		num /= 16;
	}
    return (len);
}