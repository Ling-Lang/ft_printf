/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:00:25 by jkulka            #+#    #+#             */
/*   Updated: 2022/11/30 12:51:23 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *str, size_t n)
{
	const char	*ptr;

	ptr = str;
	while (*ptr && n)
	{
		ptr++;
		n--;
	}
	return (ptr - str);
}

char	*ft_substr(char const *str, unsigned int start, size_t n)
{
	size_t	length;
	char	*new_str;

	if (!str)
		return (NULL);
	length = ft_strlen(str);
	if (length < start)
		start = length;
	str += start;
	n = ft_strnlen(str, n);
	new_str = (char *)ft_calloc(n + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, (void *)str, n);
	return (new_str);
}
