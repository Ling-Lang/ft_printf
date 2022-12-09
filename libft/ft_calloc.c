/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:10:33 by jkulka            #+#    #+#             */
/*   Updated: 2022/11/29 14:27:29 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// void	*ft_calloc(unsigned int count, unsigned int size)
// {
// 	void	*p;

// 	if (size && count > SIZE_MAX / size)
// 		return (NULL);
// 	p = malloc(count * size);
// 	if (p == NULL)
// 		return (NULL);
// 	ft_bzero(p, count * size);
// 	return (p);
// }

#include "libft.h"

void	*ft_calloc(unsigned int num, unsigned int size)
{
	char	*memory;

	if (size && num > SIZE_MAX / size)
		return (NULL);
	memory = (char *)malloc(num * size);
	if (!memory)
		return (NULL);
	ft_memset(memory, 0, num * size);
	return (memory);
}
