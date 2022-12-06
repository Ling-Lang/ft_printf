/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dectohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 09:39:30 by jkulka            #+#    #+#             */
/*   Updated: 2022/12/06 15:21:09 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdio.h>
#include <string.h>

char* reverse(char* str);
char* convert_base10_to_hex(int base10_num)
{
    char hex_chars[] = "0123456789ABCDEF";
    static char hex_num[100];
    int i = 0;

    while (base10_num != 0)
    {
        hex_num[i++] = hex_chars[base10_num % 16];
        base10_num /= 16;
    }

    hex_num[i] = '\0';

    return reverse(hex_num);
}
char* reverse(char* str) {
  char* rev;
  int length = ft_strlen(str);
  int i, j;

  rev = (char*)malloc((length + 1) * sizeof(char));

  i = 0;
  j = length - 1;
  while (i < length) {
    rev[i] = str[j];
    i++;
    j--;
  }
  rev[i] = '\0';

  return rev;
}
// int main()
// {
// 	int i = 1234;
// 	printf("%s",convert_base10_to_hex(i));
// 	return 0;
// }
