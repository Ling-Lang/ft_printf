/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:54:38 by jkulka            #+#    #+#             */
/*   Updated: 2023/02/01 12:03:25 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printnext(char *str, int *i);
void	ft_checkarg(const char c, void *arg, int *count);
char	*ft_convert_base10_to_hex(int base10_num);
void ft_parse_string(char *str, va_list *arg, int *count);
/* int	ft_printf(const char *str, ...) */
// {
//   va_list	args;
//   char	*string;
//   int		i;
//   int c = 0;
//
//   i = 0;
//   va_start(args, str)
//   string = va_arg(args, char *);
//   while (str)
//   {
//     if (str[i] == '%')
//     {
//       if (str[i + 1] == '%')
//       {
//         if (str[i+2] != '%')
//         {
//           ft_printpercent();
//           c++;
//         }
//         c++;
//       }
//       i++;
//       ft_checkarg(str[i], string, &c);
//       string = va_arg(args, char *);
//       i++;
//     }
//     if (str[i] == '\0')
//       return (c);
//     ft_printnext((char *)str, &i);
//     c++;
//   }
//   va_end(args);
//   return (c);
// }

void ft_parse_string(char *str, va_list *arg, int *count)
{
  int i;

  i = 0;
  while (str)
  {
    if (str[i] == '%' && str[i + 1] != '\0' /*&& ft_checkarg(str[i + 1], va_arg(arg, char *), count)*/)
    {
      ft_checkarg(str[i + 1],(va_arg(*arg, char *)), count);
      i += 2;
    }
    else {
      count += ft_printchar(str[i], *count);
    }
  }
}

void	ft_checkarg(const char c, void *arg, int *count)
{
	if (c == 'c')
		ft_printchar((char)arg, *count); 
	else if (c == 's')
		ft_printstr(arg, count);
	else if (c == 'p')
		ft_printptr((void *)arg);
	else if (c == 'd')
  ft_printptr(arg);
	else if (c == 'i')
		ft_printint(arg, count);
	else if (c == 'u')
		ft_printuint(arg);
	else if (c == 'x')
		ft_printhexlow(arg);
	else if (c == 'X')
		ft_printhexup(arg);
}
int ft_printf(const char *str, ...)
{
  va_list argument_list;
  int res;
  
  res = 0;
  va_start(argument_list, str);
  ft_parse_string((char *)str, &argument_list, &res);
  return (res);
}


#include <stdio.h>
int	main(void)
{
  ft_printf("Hello");
 return (0);
 }
