# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/19 20:08:21 by alromero          #+#    #+#              #
#    Updated: 2024/02/18 20:27:40 by jcharfao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRC =	ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c\
ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_calloc.c\
ft_memmove.c ft_strlcat.c ft_strlcpy.c ft_strjoin.c ft_strdup.c\
ft_strncmp.c ft_toupper.c ft_tolower.c ft_substr.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_atoi.c\
ft_strmapi.c ft_striteri.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
ft_itoa.c
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h


all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
