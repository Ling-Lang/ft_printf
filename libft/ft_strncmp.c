/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:39:26 by jkulka            #+#    #+#             */
/*   Updated: 2022/11/29 14:08:48 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_strncmp(char *s1, char *s2, size_t n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (((s1[i] != '\0') || (s2[i] != '\0')) && i < n)
// 	{
// 		if (s1[i] == '\200' && s2[i] == '\0')
// 		{
// 			return (1);
// 		}
// 		if (s1[i] != s2[i])
// 		{
// 			return (s1[i] - s2[i]);
// 		}
// 		i++;
// 	}
// 	return (0);
// }

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
