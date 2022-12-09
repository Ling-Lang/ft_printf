/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:59:22 by jkulka            #+#    #+#             */
/*   Updated: 2022/11/23 12:15:42 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	*foundchar;

	foundchar = NULL;
	p = (unsigned char *)s;
	while (n--)
	{
		if (*p != (unsigned char)c)
		{
			p++;
		}
		else
		{
			foundchar = p;
			break ;
		}
	}
	return (foundchar);
}
