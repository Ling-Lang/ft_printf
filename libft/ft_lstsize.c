/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:53:41 by jkulka            #+#    #+#             */
/*   Updated: 2022/11/07 14:59:45 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int				len;
	struct s_list	*i;

	len = 0;
	i = (struct s_list *)lst;
	while (i != NULL)
	{
		len++;
		i = i->next;
	}
	return (len);
}
