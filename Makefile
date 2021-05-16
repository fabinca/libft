#$(NAME), all, clean, fclean and re.

CC		= gcc
CFLAGS	= -Werror -Wall -Wextra -I.
DEPS	= libft.h

#rule 1
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
libft: main.o ft_atoi.o
	$(CC) -o outputfile main.o ft_atoi.o

#rule 2
all:

#rule 3
clean:

#rule 4
fclean:
