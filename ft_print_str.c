/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:04:54 by aakouhar          #+#    #+#             */
/*   Updated: 2023/11/27 12:07:32 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_str(va_list list)
{
    int     i;
    char    *str;

    i = 0;
    str = va_arg(list, char *);
    if (!str)
        str = "(null)";
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return (i);
}