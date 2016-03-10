# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbompoil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/19 17:26:24 by mbompoil          #+#    #+#              #
#    Updated: 2016/02/01 18:54:08 by upierre-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

HEAD = fillit.h

FILES = main.c \
		ft_read.c \
		ft_bigcheck.c \
		ft_strijcheck.c \
		ft_slashcheck.c \
		ft_tetricheck.c \
		ft_strsplit.c \
		ft_strsub.c \

BINARIES = $(FILES:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(FILES) -I $(HEAD)

clean :
	/bin/rm -f $(BINARIES)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
