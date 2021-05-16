#$(NAME), all, clean, fclean and re.

NAME	= libft
CC		= gcc
CFLAGS	= -Werror -Wall -Wextra -I.
DEPS	= libft.h
BIN		= a.out

#rule 1
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
$(NAME): *.o
	$(CC) $(CFLAGS) -o $(BIN) *.o

#rule 2
all:

#rule 3
clean:
	-rm edit $(objects)

#rule 4
fclean:

#rule : 
re:

#rule 6
norm:
	norminette *.c