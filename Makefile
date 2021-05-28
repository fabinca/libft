# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/27 21:05:06 by cfabian           #+#    #+#              #
#    Updated: 2021/05/28 12:34:59 by cfabian          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft
SRCS 		= \
ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c

SRCS_BONUS	= \
ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS		= $(SRCS:.c=.o)
OBJS_BONUS	= $(SRCS_BONUS:.c=.o)
CC			= gcc
CFLAGS		= -Werror -Wall -Wextra
RM			= rm -f
HEAD		= libft.h

%.o: %.c $(HEAD)
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) 

$(NAME):$(OBJS)
		ar rc $(NAME).a $(OBJS)
		ranlib $(NAME).a

bonus: $(OBJS) $(OBJS_BONUS)
		ar rc $(NAME).a $(OBJS) $(OBJS_BONUS)
		ranlib $(NAME).a

test:	norm all main.c
		$(CC) -g -o $(NAME).out main.c -L. -lft
		./$(NAME).out | cat -e

tb:		bonus main_bonus.c
		norminette $(SRCS_BONUS)
		$(CC) -g -o bonus.out main_bonus.c -L. -lft
		./bonus.out

all:	$(NAME)

clean:
		$(RM) $(OBJS)
		$(RM) $(OBJS_BONUS)
		$(RM) libft.a
		$(RM) libft.out

fclean:	clean
		$(RM) $(NAME)

re: 	fclean all

norm:
		norminette $(SRCS) libft.h
		