/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 09:39:30 by jkulka            #+#    #+#             */
/*   Updated: 2022/12/09 11:32:53 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*reverse(char *str);

char	*ft_convert_base10_to_hex_lower(int num)
{
	static char	hex_str[100];
	int			i;
	int			digit;

	i = 0;
	ft_memset(hex_str, 0, 100);
	while (num != 0)
	{
		digit = num % 16;
		if (digit < 10)
		{
			hex_str[i] = digit + '0';
		}
		else
		{
			hex_str[i] = digit - 10 + 'a';
		}
		i++;
		num /= 16;
	}
	return (reverse(hex_str));
}

char	*ft_convert_base10_to_hex(int num)
{
	static char	hex_str[100];
	int			i;
	int			digit;

	ft_memset(hex_str, 0, 100);
	i = 0;
	while (num != 0)
	{
		digit = num % 16;
		if (digit < 10)
		{
			hex_str[i] = digit + '0';
		}
		else
		{
			hex_str[i] = digit - 10 + 'A';
		}
		i++;
		num /= 16;
	}
	return (reverse(hex_str));
}

char	*reverse(char *str)
{
	char	*rev;
	int		length;
	int		i;
	int		j;

	length = ft_strlen(str);
	rev = (char *)malloc((length + 1) * sizeof(char));
	i = 0;
	j = length - 1;
	while (i < length)
	{
		rev[i] = str[j];
		i++;
		j--;
	}
	rev[i] = '\0';
	return (rev);
}
