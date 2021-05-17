NAME	= libft
SRCS 	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_atoi.c
OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAGS	= -Werror -Wall -Wextra -I.
RM		= rm -f

.c.o: 
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) 

$(NAME):$(OBJS)
		ar rc libft.a $(OBJS)

test:	norm re
		$(CC) -o $(NAME).out main.c -L. -lft
		./$(NAME).out

all:	$(NAME) main.c
		ranlib $(NAME).a

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re: 	fclean all

norm:
		norminette $(SRCS)