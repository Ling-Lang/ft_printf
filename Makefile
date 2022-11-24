NAME = libftprintf.a

RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR		= ar
ARFLAGS = -rcs
INCFLAG	= -I .

MANDO = ft_printf.c \

MANDOOBJ	= $(MANDO:.c=.o)

$(NAME): $(MANDOOBJ)
	@$(AR) $(ARFLAGS) $@ $^


%.o : %.c
	@$(CC) -c $(CFLAGS) $(INCFLAG) $< -o $@

clean:
	- @$(RM) $(MANDOOBJ)

fclean: clean
	- @$(RM) ${NAME}

re: fclean all

all: $(NAME) bonus

.PHONY: all clean fclean re bonus
