/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:35:38 by jkulka            #+#    #+#             */
/*   Updated: 2022/11/21 11:21:55 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	char			*c_src;
	char			*c_dest;
	unsigned int	i;

	if (!dest && !src)
		return (NULL);
	c_src = (char *)src;
	c_dest = (char *)dest;
	i = 0;
	if ((c_dest > c_src))
	{
		while (len-- > 0)
		{
			c_dest[len] = c_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	return ((void *)c_dest);
}
