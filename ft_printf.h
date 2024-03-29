/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:46:44 by jkulka            #+#    #+#             */
/*   Updated: 2023/03/17 13:45:33 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/src/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_check_arg(const char c, va_list *arg, int *count);
int		ft_printchar(char arg);
int		ft_printstr(char *arg);
int		ft_printint(int arg);
int		ft_printuint(unsigned int arg);
int		ft_printhexlow(unsigned long arg);
int		ft_printhexup(unsigned long arg);
int		ft_printpercent(void);
int		ft_printptr(unsigned long ptr);
char	*ft_ptoa(long n);
char	*ft_prefix(char *prefix, char *str);
size_t	ft_digit_len(unsigned long n, int base);
char	*ft_itoa_base(unsigned long n, int low);
char	*ft_uitoa(unsigned int n);

#endif
