/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:54:38 by jkulka            #+#    #+#             */
/*   Updated: 2022/12/09 11:30:30 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_checksign(const char *str, void *arg);
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
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i++] == '%')
			{
				ft_printpercent();
				i += 2;
			}
			i++;
			ft_checkarg(str[i], string);
			string = va_arg(args, char *);
			i++;
		}
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (0);
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

// #include <stdio.h>
// int	main(void)
// {
// 	// int i = 1234;
// 	// ft_printf("%%c:%c", 'F');
// 	// ft_printf("%s %d\n", "Hello World", 1234);
// 	// // ft_printf("%%p:\t%p\n", 'c');
// 	ft_printf("%%d:\t%d\n", 100000);
// 	// ft_printf("%%i:\t%i\n", i);
// 	ft_printf("%%u:\t%u\n", 12313);
// 	// ft_printf("%%x:\t%x\n", 1234);
// 	// ft_printf("%%X:\t%X\n", 1234);
// 	// ft_printf("%%%%:\t%%\n");
// 	return (0);
// }