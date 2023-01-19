/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:51:31 by jkulka            #+#    #+#             */
/*   Updated: 2022/10/19 13:50:42 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*str;

	len = 0;
	while (src[len])
	{
		len++;
	}
	str = malloc(len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while (len >= 0)
	{
		str[len] = src[len];
		len--;
	}
	return (str);
}
