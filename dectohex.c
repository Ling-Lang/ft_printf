/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dectohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 09:39:30 by jkulka            #+#    #+#             */
/*   Updated: 2022/11/25 10:22:22 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

char	*ft_dectohex(long decimalnum)
{
	long	quotient;
	long	remainder;
	int		i;
	int		j;
	char	*hexadecimalnum;

	quotient = decimalnum;
	i = 0;
	j = 0;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = 48 + remainder;
		else
			hexadecimalnum[j++] = 55 + remainder;
		quotient = quotient / 16;
	}
	// i = j;
	// while (i >= 0)
	// {
	// 	ft_putchar_fd(hexadecimalnum[i], 1);
	// 	i--;
	// }
	return (hexadecimalnum);
}