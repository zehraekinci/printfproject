NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Werror
AR = ar rc

SRCS = ft_printf.c ft_putchar.c ft_puthexad.c ft_putpointer.c ft_putdint.c ft_putstring.c ft_putunchar.c

OBJS =	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re