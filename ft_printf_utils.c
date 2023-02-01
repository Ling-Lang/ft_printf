/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:03:08 by jkulka            #+#    #+#             */
/*   Updated: 2023/02/01 12:10:52 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(void *arg, int *count)
{
	*count += 1;
	ft_putchar_fd((intptr_t)arg, 1);
}

void	ft_printstr(void *arg, int *count)
{
	*count += ft_strlen((char *)arg);
	ft_putstr_fd((char *)arg, 1);
}

void	ft_printptr(void *arg)
{
	ft_printhexlow(arg);
}

void	ft_printint(void *arg, int *count)
{
	char	*c;

	c = ft_itoa((intptr_t)arg);
	*count += ft_strlen((char *) c); 
	ft_putstr_fd(c, 1);
}

void print_pointer(void *ptr) {
    char *buf = "0x";
    unsigned long value = (unsigned long)ptr;
    int i = 2;
    int j = (sizeof(void*) * 2) - 1;
    int leading_zeros = 1;

    while (j >= 0) {
        unsigned char hex = (value >> (j * 4)) & 0xF;
        if (hex != 0 || !leading_zeros || j == 0) {
            leading_zeros = 0;
            if (hex >= 10) {
                buf[i++] = hex - 10 + 'a';
            } else {
                buf[i++] = hex + '0';
            }
        }
        j--;
    }

    buf[i++] = '\n';
    buf[i] = '\0';

    write(1, buf, ft_strlen(buf));
}

