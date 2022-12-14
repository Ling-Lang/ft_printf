/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:46:44 by jkulka            #+#    #+#             */
/*   Updated: 2022/12/09 11:12:01 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
char	*ft_convert_base10_to_hex(int base10_num);
char	*ft_convert_base10_to_hex_lower(int base10_num);
void	ft_printchar(void *arg);
void	ft_printstr(void *arg);
void	ft_printptr(void *arg);
void	ft_printint(void *arg);
void	ft_printint(void *arg);
void	ft_printuint(void *arg);
void	ft_printhexlow(void *arg);
void	ft_printhexup(void *arg);
void	ft_printpercent(void);
#endif