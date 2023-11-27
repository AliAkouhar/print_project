/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paddress.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:48:54 by aakouhar          #+#    #+#             */
/*   Updated: 2023/11/27 12:56:50 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_print(unsigned long num)
{
    char *hex;

    hex = "0123456789abcdef";
    if (num < 16)
        ft_putchar(hex[num]);
    else
    {
        ft_print(num / 16);
        ft_print(num % 16);
    }
}

int ft_paddress(va_list list)
{
    void            *ptr;
    int             len;
    unsigned long   p;

    ptr = va_arg(list, void *);
    len = write(1, "0x", 2);
    p = (unsigned long)ptr;
    ft_print(p);
    if (p == 0)
        len++;
    while (p)
    {
        len++;
        p /= 16;
    }
    return (len);
}