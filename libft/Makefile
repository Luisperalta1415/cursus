# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 12:22:06 by lperalta          #+#    #+#              #
#    Updated: 2025/04/28 12:22:14 by lperalta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_atoi.c ft_toupper.c ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_memchr.c ft_memcmp.c ft_strncmp.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_strrchr.c ft_striteri.c

OBJS = $(SRCS:.c=.o)

cc = gcc -WALL -WEXTRA -WERROR

AR = ar rcs

RM = rm -f

all: $(NAME)

$(OBJS) : $(HEADER)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

so: $(OBJS)
	$(CC) -nostartfiles -fPIC -shared -o libft.

PHONY: all clean fclean re
