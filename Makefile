# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 02:24:00 by mcastrat          #+#    #+#              #
#    Updated: 2024/10/21 20:19:52 by mcastrat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c \
	ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c \
	ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c \

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
		ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
		ft_lstmap.c ft_lstnew.c ft_lstsize.c
WW = gcc
CF = -Wall -Wextra -Werror
RM = rm -f
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)
all : $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
bonus : $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
%.o : %.c libft.h
	$(WW) $(CF) -c $< -o $@
clean: 
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all bonus clean fclean re
