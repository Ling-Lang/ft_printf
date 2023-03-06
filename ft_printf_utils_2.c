/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:04:14 by jkulka            #+#    #+#             */
/*   Updated: 2023/03/06 15:30:07 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexlow(int arg)
{
	char	*c;

	c = ft_convert_base10_to_hex_lower(arg);
	ft_putstr_fd(c, 1);
	return((int)ft_strlen(c));
}

int	ft_printhexup(int arg)
{
	char	*c;

	c = ft_convert_base10_to_hex(arg);
	ft_putstr_fd(c, 1);
	return((int)ft_strlen(c));
}

int	ft_printpercent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
