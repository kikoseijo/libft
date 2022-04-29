# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jseijo-p <jseijo-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 23:24:18 by jseijo-p          #+#    #+#              #
#    Updated: 2022/04/28 21:49:10 by jseijo-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
 		ft_isdigit.c ft_strrchr.c ft_strdup.c ft_putchar_fd.c ft_split.c \
		ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_tolower.c ft_toupper.c ft_calloc.c ft_strlcpy.c ft_strlcat.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c

OBJS	=	$(SRCS:.c=.o)

BONUS	=	ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstnew.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS	=	$(BONUS:.c=.o)

RM		= rm -f

all: $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror -g $(SRCS)
		ar crs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS) $(BONUS_OBJS)

fclean:
			clean
			$(RM) $(NAME)

re:
	fclean all

bonus:
			gcc -c -Wall -Wextra -Werror -g $(SRCS) $(BONUS)
			ar crs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all, clean, fclean, re
