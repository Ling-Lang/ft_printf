#include "ft_printf.h"

int main()
{
    ft_printf("%c  - %p - %d - %i %u - %x - %X %%", '\0',  (void *)0xdeadc0de, 0, (int)-2147483648, -1, -1, 200000000);
}