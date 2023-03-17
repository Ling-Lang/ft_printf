/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:54:38 by jkulka            #+#    #+#             */
/*   Updated: 2023/03/17 13:30:41 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_string(char *str, va_list *arg, int *count);

void	ft_parse_string(char *str, va_list *arg, int *count)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			ft_check_arg(str[i + 1], arg, count);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			*count += 1;
		}
		i++;
	}
}

void	ft_check_arg(const char c, va_list *arg, int *count)
{
	if (c == 'c')
		*count += ft_printchar(va_arg(*arg, int));
	if (c == 's')
		*count += ft_printstr(va_arg(*arg, char *));
	if (c == 'd' || c == 'i')
		*count += ft_printint(va_arg(*arg, int));
	if (c == 'u')
		*count += ft_printuint(va_arg(*arg, unsigned int));
	if (c == '%')
		*count += ft_printpercent();
	if (c == 'X')
		*count += ft_printhexup(va_arg(*arg, unsigned int));
	if (c == 'x')
		*count += ft_printhexlow(va_arg(*arg, unsigned int));
	if (c == 'p')
		*count += ft_printptr((unsigned long)va_arg(*arg, void *));
}

int	ft_printf(const char *str, ...)
{
	va_list	argument_list;
	int		res;

	res = 0;
	va_start(argument_list, str);
	ft_parse_string((char *)str, &argument_list, &res);
	return (res);
}
