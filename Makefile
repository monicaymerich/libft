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

NAME	= libft.a

SRC_FILES	= ft_isalpha.c /
				ft_isdigit.c /
				ft_isalnum.c /
				ft_isascii.c /
				ft_isprint.c /
				ft_strlen.c /
				ft_memset.c /
				ft_bzero /
				ft_memcpy /
				ft_memmove /
				ft_strlcpy /
				ft_strlcat /
				ft_toupper /
				ft_tolower /
				ft_strchr /
				ft_strrchr /
				ft_strncmp /
				ft_memchr /
				ft_memcmp /
				ft_strnstr /
				ft_atoi /
				ft_calloc /
				ft_strdup /

all: $(NAME)

clean:
	rm $(NAME) *.o

fclean:

re:
