# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 12:47:42 by bjanette          #+#    #+#              #
#    Updated: 2021/10/21 20:57:44 by bjanette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name 	= libft.a
LIST 	= ft_isprint.c ft_strjoin.c ft_strtrim.c ft_isalnum.c \
			ft_isalpha.c ft_isascii.c ft_isdigit.c ft_bzero.c \
			ft_memset.c ft_strlen.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
			ft_memcmp.c ft_strnstr.c ft_strnstr.c ft_calloc.c \
			ft_strdup.c ft_atoi.c ft_substr.c ft_itoa.c ft_strmapi.c \
			ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_split.c
LIST_B	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c
OBJ 	= $(LIST:.c=.o)
OBJ_B 	= $(LIST_B:.c=.o)
# D_FILES = $(LIST:.c=.d)
FLAGS 	= -Wall -Wextra -Werror
D_FILES = $(patsubst %.c,%.d,$(LIST) $(LIST_B))
HEAD 	= libft.h

all		: 	$(Name)
$(Name)	: 	$(OBJ)
		ar rcs $(Name) $?
$(OBJ)	: $(HEAD) Makefile

%.o 	: %.c
		gcc $(FLAGS) -O2 -c $< -o $@ -MD

include $(wildcard $(D_FILES))

bonus	:
		@make OBJ="$(OBJ_B)" all	

clean	: 
		@rm -f $(OBJ) $(OBJ_B) $(D_FILES)

fclean	: clean
		@rm -f $(Name)

re		: fclean all

.PHONY	: all clean fclean re bonus


