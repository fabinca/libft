NAME	= libft
SRCS 	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c
OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAGS	= -Werror -Wall -Wextra -I.
RM		= rm -f
HEAD	= libft.h

%.o: %.c $(HEAD)
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) 

$(NAME):$(OBJS)
		ar rc libft.a $(OBJS)

test:	norm all
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