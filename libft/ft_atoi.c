/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:17:19 by jkulka            #+#    #+#             */
/*   Updated: 2022/11/14 14:38:39 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_limit(int base, char *str, int i, int sign);

int	ft_atoi(char *str)
{
	int	sign;
	int	base;
	int	i;

	sign = 1;
	base = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i++] == '-');
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		check_limit(base, str, i, sign);
		base = 10 * base + (str[i++] - '0');
	}
	return (base * sign);
}

static int	check_limit(int base, char *str, int i, int sign)
{
	int	max;
	int	min;

	max = 2147483647;
	min = -2147483648;
	if (base > max / 10 || (base == max / 10 && str[i] - '0' > '7'))
	{
		if (sign == 1)
		{
			return (max);
		}
		else
			return (min);
	}
	return (0);
}
