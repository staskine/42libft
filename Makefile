# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sataskin <sataskin@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 11:36:21 by sataskin          #+#    #+#              #
#    Updated: 2023/11/02 15:08:11 by sataskin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_strlcpy.c\
		ft_memchr.c ft_memcmp.c ft_strncmp.c ft_atoi.c ft_strnstr.c\
		ft_strlcat.c ft_calloc.c

OBJECT = $(SOURCE:.c=.o)

HEADERS = ./

all: $(NAME)

$(NAME): $(OBJECT)
	ar -rcs $(NAME) $(OBJECT)

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all

#For tests. Copy onto another makefile along with test files
test:
	cc -Wall -Wextra -Werror test_files/main.c $(SOURCE)

run:
	./a.out

mistakes: COPYPASTE THIS 
	./a.out | grep 'FAIL'

remove:
	rm a.out