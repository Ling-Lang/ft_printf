/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:04:14 by jkulka            #+#    #+#             */
/*   Updated: 2022/12/09 11:11:39 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printuint(void *arg)
{
	char	*c;

	c = ft_itoa((unsigned int)arg);
	ft_putstr_fd(c, 1);
}

void	ft_printhexlow(void *arg)
{
	char	*c;

	c = ft_convert_base10_to_hex_lower((int)arg);
	ft_putstr_fd(c, 1);
}

void	ft_printhexup(void *arg)
{
	char	*c;

	c = ft_convert_base10_to_hex((int)arg);
	ft_putstr_fd(c, 1);
}

void	ft_printpercent(void)
{
	ft_putchar_fd('%', 1);
}
