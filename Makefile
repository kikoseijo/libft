# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jseijo-p <jseijo-p@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 23:24:18 by jseijo-p          #+#    #+#              #
#    Updated: 2022/05/10 08:40:04 by jseijo-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
 		ft_isdigit.c ft_strrchr.c ft_strdup.c ft_putchar_fd.c ft_split.c \
		ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_tolower.c ft_toupper.c ft_calloc.c ft_strlcpy.c ft_strlcat.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c \
		ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstnew.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \
		get_next_line.c

OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror -g $(SRCS)
		ar crs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)
		echo $(OBJS) cleaned.

fclean:
			clean
			rm -f $(NAME)
			echo $(NAME) cleaned.

re:
	fclean all

.PHONY: all, clean, fclean, re
