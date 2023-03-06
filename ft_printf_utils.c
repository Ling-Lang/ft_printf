/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:03:08 by jkulka            #+#    #+#             */
/*   Updated: 2023/03/06 15:42:46 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int	ft_printchar(char arg)
{
	ft_putchar_fd(arg, 1);
  return (1);
}

int	ft_printstr(char *arg)
{
  if(arg == NULL)
  {
	ft_putstr_fd("(null)", 1);
	return 6;
  }

	ft_putstr_fd(arg, 1);
  return ((int)ft_strlen(arg));
}

void	ft_printptr(void *arg)
{
	ft_printhexlow((int)arg);
}

int	ft_printint(int arg)
{
  char *c;
	c = ft_itoa(arg);
	ft_putstr_fd(c, 1);
  return(ft_strlen((char *) c));
}


