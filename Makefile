# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 15:35:21 by jpatrici          #+#    #+#              #
#    Updated: 2024/10/28 16:56:22 by jpatrici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isprint.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isascii.c \
	  ft_isdigit.c ft_tolower.c ft_toupper.c ft_atoi.c ft_bzero.c \
	  ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	  ft_memset.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c \
	  ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
	  ft_strrchr.c ft_strtrim.c ft_substr.c

OBJS = $(SRC:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean: rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
