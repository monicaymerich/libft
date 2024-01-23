# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maymeric <maymeric@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 15:38:51 by maymeric          #+#    #+#              #
#    Updated: 2024/01/22 17:40:05 by maymeric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

SRC = ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_strlen.c \
      ft_memset.c \
      ft_bzero.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_strlcpy.c \
      ft_strlcat.c \
      ft_toupper.c \
      ft_tolower.c \
      ft_strchr.c \
      ft_strrchr.c \
      ft_strncmp.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_strnstr.c \
      ft_atoi.c \
      ft_calloc.c \
      ft_strdup.c 
	#afegir els que falten

OBJS = $(SRC:.c=.o)
#variable objs seran todos los .c convertidos a .o

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

%.o : %.c $(HEADER)

#$(CC) $(CFLAGS)

$(NAME) : $(SRC) $(OBJS)
	ar -rcs $(NAME) $(SRC)

clean:
	rm -f *.o

#clean es una regla sin dependencias, por eso no tiene nada después de los dos puntos, elimina todos los .o

fclean: clean
	rm -f $(NAME)

re: fclean all
#re elimina todos los .o y libft.a y lo vuelve a compilar todo

.PHONY: all clean fclean re
