/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:43:38 by aakouhar          #+#    #+#             */
/*   Updated: 2023/11/27 12:48:07 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_print(unsigned int num)
{
    if (num < 10)
        ft_putchar(num + '0');
    else
    {
        ft_print(num / 10);
        ft_print(num % 10);
    }
}

int ft_print_unsigned(va_list list)
{
    unsigned int    num;
    int             len;

    num = va_arg(list, unsigned int);
    ft_print(num);
    len = 0;
    if (num == 0)
        len++;
    while (num)
    {
        len++;
        num /= 10;
    }
    return (len);
}