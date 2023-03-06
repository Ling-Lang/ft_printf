/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:46:44 by jkulka            #+#    #+#             */
/*   Updated: 2023/03/06 15:29:36 by jkulka           ###   ########.fr       */
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
int ft_check_arg(const char c, va_list *arg, int *count);
int	ft_printchar(char arg);
int	ft_printstr(char *arg);
void	ft_printptr(void *arg);
int	ft_printint(int arg);
int	ft_printhexlow(int arg);
int	ft_printhexup(int arg);
int	ft_printpercent(void);
void print_pointer(void *ptr);
#endif
