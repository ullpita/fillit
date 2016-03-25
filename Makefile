# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbompoil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/19 17:26:24 by mbompoil          #+#    #+#              #
#    Updated: 2016/03/17 14:09:02 by mbompoil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

O_SRC = main.o ft_add_tetri_map.o ft_adjust_map.o ft_algo_map.o ft_algomino.o \
			ft_bigcheck.o ft_read.o ft_sharpalpha.o ft_slashcheck.o \
			ft_strijcheck.o ft_strsplit2.o ft_strsub2.o ft_tetri_base_map.o \
			ft_tetricheck.o \

FLAG = -Wextra -Wall #-Werror

INC = libft/libft.h

all: $(NAME)

%.o: %.c
	gcc $(FLAG) -c $< -I $(INC)

$(NAME): $(O_SRC)
	make -C libft
	gcc $(FLAG) -Llibft -lft -I $(INC) -o $(NAME) $(O_SRC)

clean:
	rm -rf $(O_SRC)

fclean: clean
	rm -rf $(NAME)
	make -C libft fclean

re: clean fclean all

.PHONY: all clean fclean re
