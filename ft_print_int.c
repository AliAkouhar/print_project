/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:11:47 by aakouhar          #+#    #+#             */
/*   Updated: 2023/11/27 12:22:03 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_print(int num)
{
    if (num < 0)
    {
        ft_putchar('-');
        num = -num;
    }
    if (num >= 0 && num <= 9)
        ft_putchar(num + '0');
    else
    {
        ft_print(num / 10);
        ft_print(num % 10);
    }
}

int ft_print_int(va_list list)
{
    int     num;
    int     len;

    num = va_arg(list, int);
    ft_print(num);
    len = 0;
    if (num == 0)
		len++;
	if (num < 0)
		len++;
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}