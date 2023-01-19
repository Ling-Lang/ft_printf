/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:54:38 by jkulka            #+#    #+#             */
/*   Updated: 2023/01/19 11:48:00 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnext(char *str, int *i);
void	ft_checkarg(const char c, void *arg);
char	*ft_convert_base10_to_hex(int base10_num);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	char	*string;
	int		i;

	i = 0;
	va_start(args, str);
	string = va_arg(args, char *);
	while (str)
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
			{
				ft_printpercent();
			}
			i++;
			ft_checkarg(str[i], string);
			string = va_arg(args, char *);
			i++;
		}
		if (str[i] == '\0')
			return (i - 1);
		ft_printnext((char *)str, &i);
	}
	return (i - 1);
}

void	ft_checkarg(const char c, void *arg)
{
	if (c == 'c')
		ft_printchar(arg);
	else if (c == 's')
		ft_printstr(arg);
	else if (c == 'p')
		ft_printptr(arg);
	else if (c == 'd')
		ft_printint(arg);
	else if (c == 'i')
		ft_printint(arg);
	else if (c == 'u')
		ft_printuint(arg);
	else if (c == 'x')
		ft_printhexlow(arg);
	else if (c == 'X')
		ft_printhexup(arg);
}

int	ft_printnext(char *str, int *i)
{
	ft_putchar_fd(str[*i], 1);
	*i += 1;
	return (*i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	ft_printf("the char is: %c\n\th%s", 'a', "Hello");
// 	ft_printf("That's a percent sign %% and thats %%c", 'c');
// 	return (0);
// }