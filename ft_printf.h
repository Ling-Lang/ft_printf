/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:46:44 by jkulka            #+#    #+#             */
/*   Updated: 2023/03/16 21:45:33 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/src/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
char	*ft_convert_base10_to_hex(int base10_num);
char	*ft_convert_base10_to_hex_lower(int base10_num);
void ft_check_arg(const char c, va_list *arg, int *count);
int	ft_printchar(char arg);
int	ft_printstr(char *arg);
char	*convert_pointer(void *ptr);
int	ft_printint(int arg);
int	ft_printuint(int arg);
int	ft_printhexlow(int arg);
int	ft_printhexup(int arg);
int	ft_printpercent(void);
int ft_printptr(void *ptr);

#endif
