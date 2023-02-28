NAME = libftprintf.a
BIN_NAME = ft_prinf.test

RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR		= ar
ARFLAGS = -rcs
INCFLAG	= -I include -I libft
LIBFT 	= libft
TESTER 	= ft_printf_tester

MAND = ft_printf.c \
		ft_printf_utils.c \
		ft_printf_utils_2.c \
		ft_dectohex.c \

MANDOBJ	= $(MAND:.c=.o)

$(NAME): $(MANDOBJ) | lft
	cp libft/libft.a $@
	$(AR) $(ARFLAGS) $@ $^
	# rm libft.a

lft:
	(cd $(LIBFT) && make && make clean)

%.o : %.c lft
	$(CC) -c $(CFLAGS) $(INCFLAG) $< -o $@

debug: $(MANDOBJ) | lft
	cp libft/libft.a .
	$(CC) libft.a $(CFLAGS) $(MANDOBJ) -o $(BIN_NAME)
	rm libft.a
	rm $(MANDOBJ)

test:
	sh test.sh	

clean:
	$(RM) $(MANDOBJ)

fclean: clean
	$(RM) $(NAME) $(BIN_NAME)
	$(RM) libft.a

re: fclean all

all: $(NAME)

.PHONY: all clean fclean re
