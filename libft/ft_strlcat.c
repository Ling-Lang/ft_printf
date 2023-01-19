/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:49:50 by jkulka            #+#    #+#             */
/*   Updated: 2022/10/28 10:19:52 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	count;
	int				i;

	i = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	count = ft_strlen(dest);
	while (src[i] != '\0' && count + 1 < size)
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
