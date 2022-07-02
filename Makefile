# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kedavain <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/04 15:22:11 by kedavain          #+#    #+#              #
#    Updated: 2021/04/09 15:08:50 by kedavain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I.
SRC =	ft_atoi.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memmove.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strcpy.c \
		ft_strcat.c \
		ft_strncpy.c \
		ft_strcmp.c \
		ft_strncat.c \
		ft_strtrim.c \
		ft_isspace.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_split.c \

LISTE =		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

OBJ = $(SRC:.c=.o)
OBJBONUS =$(LISTE:.c=.o)
NAME = libft.a
RM = rm -f

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(NAME) : $(OBJ)
	ar -rcs $@ $(OBJ)

bonus :	$(OBJBONUS)
	ar -rcs $(NAME) $(OBJBONUS)

clean : 
	$(RM) $(OBJ)
	$(RM) $(OBJBONUS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
