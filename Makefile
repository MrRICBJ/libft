# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 12:47:42 by bjanette          #+#    #+#              #
#    Updated: 2021/10/25 18:14:12 by bjanette         ###   ########.fr        #
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
LIST_B	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ 	= $(LIST:.c=.o)
OBJ_B 	= $(LIST_B:.c=.o)
FLAGS 	= -Wall -Wextra -Werror
D_FILES = $(patsubst %.c,%.d,$(LIST) $(LIST_B))
HEAD 	= libft.h
TEMP_FILE_B = .temp_file_b

all		: 	$(Name)
$(Name)	: 	$(OBJ)
		ar rcs $(Name) $?
$(OBJ)	: $(HEAD) Makefile

%.o 	: %.c
		gcc $(FLAGS) -O2 -c $< -o $@ -MD

include $(wildcard $(D_FILES))

bonus	: $(TEMP_FILE_B)

$(TEMP_FILE_B)	: $(OBJ) $(OBJ_B)
		ar rcs $(Name) $(OBJ) $(OBJ_B)
		touch $(TEMP_FILE_B)

clean	: 
		rm -f $(OBJ) $(OBJ_B) $(D_FILES)
		rm -f $(TEMP_FILE_B)
		

fclean	: clean
		rm -f $(Name)

re		: fclean all

.PHONY	: all clean fclean re bonus
