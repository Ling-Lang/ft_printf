/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:03:08 by jkulka            #+#    #+#             */
/*   Updated: 2023/01/24 12:59:00 by jkulka           ###   ########.fr       */
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

void	ft_printint(void *arg)
{
	char	*c;

	c = ft_itoa((intptr_t)arg);
	ft_putstr_fd(c, 1);
}
