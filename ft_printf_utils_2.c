/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:04:14 by jkulka            #+#    #+#             */
/*   Updated: 2023/03/13 11:16:51 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexlow(int arg)
{
	char	*c;
  int len;

	c = ft_convert_base10_to_hex_lower(arg);
  len = ft_strlen(c);
  ft_putstr_fd(c, 1);
  free(c);
	return (len);
}

int	ft_printhexup(int arg)
{
	char	*c;
  int   len;

	c = ft_convert_base10_to_hex(arg);
	ft_putstr_fd(c, 1);
  len = ft_strlen(c);
  free(c);
  return (len);	
}

int	ft_printpercent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
