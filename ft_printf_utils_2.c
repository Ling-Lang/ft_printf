/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:04:14 by jkulka            #+#    #+#             */
/*   Updated: 2023/03/16 21:45:29 by dylan            ###   ########.fr       */
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

int ft_printptr(void *ptr)
{
  int len;
  char *str;

  str = convert_pointer(ptr); 
  len = ft_strlen(str);
  ft_printstr(str);
  return (len);
}

#include <stdio.h>
char	*convert_pointer(void *ptr)
{
	char	*hex;
	char	*alphabet = "0123456789abcdef";
	uintptr_t	p = (uintptr_t)ptr;
	int		len;

	len = 2 + (sizeof(p) * 2);
	hex = (char *)malloc(len + 1);
	if (!hex)
		return (NULL);
	hex[len] = '\0';
	hex[0] = '0';
	hex[1] = 'x';
	len--;
	while (len > 1)
	{
		hex[len] = alphabet[p % 16];
		p /= 16;
		len--;
	}
  printf(hex);
	return (hex);
}
