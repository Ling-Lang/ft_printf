/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:54:38 by jkulka            #+#    #+#             */
/*   Updated: 2022/12/01 13:33:35 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_checksign(const char *str, void *arg);
void	ft_print(const char c, void *arg);
void	ft_print2(const char c, void *arg);
char	*ft_dectohex(long decimalnum);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	char	*tr;

	tr = ft_substr(str, 0, 5);
	ft_putstr_fd(tr, 1);
	va_start(args, str);
	tr = va_arg(args, char *);
	ft_checksign(str, tr);
	return (0);
}

void	ft_checksign(const char *str, void *arg)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_print(str[i], arg);
		}
		i++;
	}
}

void	ft_print(const char c, void *arg)
{
	char		*str;

	if (c == 's')
	{
		ft_putstr_fd((char *)arg, 1);
	}
	else if (c == 'd')
	{
		str = ft_itoa((int)arg);
		ft_putstr_fd(str, 1);
	}
	else if (c == 'c')
	{
		ft_putchar_fd((char)arg, 1);
	}
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
	}
	else
		ft_print2(c, arg);
}

void	ft_print2(const char c, void *arg)
{
	char	*str;
	int		i;

	if (c == 'i')
	{
		str = ft_itoa((int)arg);
		ft_putstr_fd(str, 1);
	}
	if (c == 'X')
	{
		i = atoi(arg);
		str = ft_dectohex(i);
		ft_putstr_fd(str, 1);
	}
}

char	*ft_dectohex(long decimalnum)
{
	long	quotient;
	long	remainder;
	int		i;
	int		j;
	char	*hexadecimalnum;

	hexadecimalnum = NULL;
	quotient = decimalnum;
	i = 0;
	j = 0;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = 48 + remainder;
		else
			hexadecimalnum[j++] = 55 + remainder;
		quotient = quotient / 16;
	}
	return (hexadecimalnum);
}

int	main(void)
{
	ft_printf("Hello%d ", 112);
	ft_putchar_fd('\n', 1);
	ft_printf("Hello%s", "World");
	ft_putchar_fd('\n', 1);
	ft_printf("Hello%c ", 'W');
	ft_putchar_fd('\n', 1);
	ft_printf("Hello %%");
	ft_putchar_fd('\n', 1);
	// ft_printf("I'm %i", 123);
	ft_printf("Hello%X", 1234);
}