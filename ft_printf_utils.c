/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:03:08 by jkulka            #+#    #+#             */
/*   Updated: 2023/03/14 11:50:02 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char arg)
{
	ft_putchar_fd(arg, 1);
  return (1);
}

int	ft_printstr(char *arg)
{
	int len;
	char *str;
	
	len = 0;
	str = malloc(sizeof(char *) * ft_strlen(arg) + 1);
	ft_strlcpy(str, arg, ft_strlen(arg) + 1);
  if(arg == NULL)
  {
	ft_putstr_fd("(null)", 1);
	return 6;
  }
	
	len = ft_strlen(arg);
	ft_putstr_fd(str, 1);
	free(str);
  return (len);
}

void	ft_printptr(void *arg)
{
	ft_printhexlow((intptr_t)arg);
}

int	ft_printint(int arg)
{
  	char *c;
	int len;
  
	c = ft_itoa(arg);
	ft_printstr(c);
	len = ft_strlen(c);
	free(c);
  	return(len);
}


