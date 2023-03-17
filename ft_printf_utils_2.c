/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:04:14 by jkulka            #+#    #+#             */
/*   Updated: 2023/03/17 13:10:36 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printhexlow(unsigned long arg)
{
  int len;
  char *str;

  str = ft_itoa_base(arg, 1); 
  len = ft_strlen(str);
  ft_printstr(str);
  free(str);
  return (len);
}

int	ft_printhexup(unsigned long arg)
{
  int len;
  char *str;

  str = ft_itoa_base(arg, 0); 
  len = ft_strlen(str);
  ft_printstr(str);
  free(str);
  return (len);
}

int	ft_printpercent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}

int	ft_printuint(int arg)
{
  	char *c;
	int len;

	if (arg < 0)
		arg *= -1;  
	c = ft_itoa(arg);
	ft_printstr(c);
	len = ft_strlen(c);
	free(c);
  	return(len);
}

int ft_printptr(unsigned long ptr)
{
  int len;
  char *str;

  str = ft_ptoa(ptr); 
  len = ft_strlen(str);
  ft_printstr(str);
  free(str);
  return (len);
}
