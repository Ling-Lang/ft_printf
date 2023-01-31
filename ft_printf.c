/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:54:38 by jkulka            #+#    #+#             */
/*   Updated: 2023/01/31 13:18:08 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printnext(char *str, int *i);
void	ft_checkarg(const char c, void *arg, int *count);
char	*ft_convert_base10_to_hex(int base10_num);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	char	*string;
	int		i;
	int c = 0;

	i = 0;
	va_start(args, str);
	string = va_arg(args, char *);
	while (str)
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
			{
				if (str[i+2] != '%')
				{
					ft_printpercent();
					c++;
				}
				c++;
			}
			i++;
			ft_checkarg(str[i], string, &c);
			string = va_arg(args, char *);
			i++;
		}
		if (str[i] == '\0')
			return (c);
		ft_printnext((char *)str, &i);
		c++;
	}
	va_end(args);
	return (c);
}

void	ft_checkarg(const char c, void *arg, int *count)
{
	if (c == 'c')
		ft_printchar(arg, count); 
	else if (c == 's')
		ft_printstr(arg, count);
	else if (c == 'p')
		ft_printptr(arg);
	else if (c == 'd')
		ft_printint(arg, count);
	else if (c == 'i')
		ft_printint(arg, count);
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

// 	// ft_printf("%%%%%%%%%%%%%%%%");
// 	ft_printf("%c%c%c*", '\0', '1', 1);
// 	ft_putendl_fd("\n", 1);
// 	// printf("%%%%%%%%%%%%%%%%");
// 	printf("%c%c%c*", '\0', '1', 1);
// 	return (0);
// }