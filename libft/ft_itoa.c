/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:36:01 by jkulka            #+#    #+#             */
/*   Updated: 2022/11/30 13:08:41 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_createstr(char *str, long int n, int end, int i)
{
	if (n < 0)
		n *= -1;
	if (n == 0)
		str[0] = '0';
	while (i > end - 1)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	if (end == 1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int nb)
{
	char		*str;
	int			i;
	int			len;
	int			end;
	long int	n;

	end = 0;
	n = (long int)nb;
	len = ft_len(nb);
	if (n < 0)
	{
		len++;
		end = 1;
	}
	i = len - 1;
	str = (char *)ft_calloc(1, sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	return (ft_createstr(str, nb, end, i));
}
