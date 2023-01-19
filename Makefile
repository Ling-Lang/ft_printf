NAME = libftprintf.a

RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR		= ar
ARFLAGS = -rcs
INCFLAG	= -I include -I libft

MAND = ft_printf.c \
		ft_printf_utils.c \
		ft_printf_utils_2.c \
		ft_dectohex.c \

MANDOBJ	= $(MAND:.c=.o)

$(NAME): $(MANDOBJ) | lft
	cp Libft/libft.a $@
	$(AR) $(ARFLAGS) $@ $^

lft:
	(cd Libft && make && make clean)

%.o : %.c lft
	$(CC) -c $(CFLAGS) $(INCFLAG) $< -o $@

debug:
	$(CC) $(CFLAGS) $(MAND) libft.a

clean:
	$(RM) $(MANDOBJ)

fclean: clean
	$(RM) ${NAME}
	$(RM) libft.a

re: fclean all

all: $(NAME) bonus

.PHONY: all clean fclean re bonus
