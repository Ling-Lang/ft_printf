/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:26:15 by jkulka            #+#    #+#             */
/*   Updated: 2023/03/17 13:05:42 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_itoa_base(unsigned long n, int low)
{
	size_t	len;
	char *res;
	char *base;
	
	if (low == 1)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	len = ft_digit_len(n, 16);
	res = ft_calloc(len + 1, sizeof(char));
	if(!res)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
	}
	while (len-- && n)
	{
		res[len] = base[n % 16];
		n /= 16;
	}
	return (res);
}

size_t	ft_digit_len(unsigned long n, int base)
{
	size_t len;
	if (n <= 0)
		len = 1;
	else
		len = 0;
	while(n)
	{
		len++;
		n /= base;;
	}
	return (len);
}

char *ft_prefix(char *prefix, char *str)
{
	char *prefixed_str;
	
	prefixed_str = ft_strjoin(prefix, str);
	free(str);
	return(prefixed_str);
}

char *ft_ptoa(long n)
{
	char *str;
	
	str = ft_itoa_base(n, 1);
	str = ft_prefix("0x", str);
	return (str);
}