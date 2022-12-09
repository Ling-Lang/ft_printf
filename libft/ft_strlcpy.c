/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:38:29 by jkulka            #+#    #+#             */
/*   Updated: 2022/10/14 11:32:11 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t len)
{
	char	*d;
	char	*e;
	char	*s;

	d = dest;
	e = dest + len;
	s = src;
	while (*s != '\0' && d < e)
	{
		*d++ = *s++;
	}
	if (d < e)
	{
		*d = 0;
	}
	else if (len > 0)
	{
		d[-1] = 0;
	}
	while (*s != '\0')
	{
		s++;
	}
	return (s - src);
}
