/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbompoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 16:56:39 by mbompoil          #+#    #+#             */
/*   Updated: 2016/04/04 16:25:43 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>




char	*ft_adjust_tetri(char *map, int size, int nbt);

char	*ft_read_arg(int argc, char **argv, int i);
int		ft_bigcheck(char **tab);
int		ft_strijcheck(char *str);
int		ft_slashcheck(char *str);
int		ft_tetricheck(char *str);
char	**ft_strsplit2(char *s, char c);
char	*ft_strsub2(char *s, unsigned int start, size_t size);
char    *ft_add_tetri_map(char **tab, char *map);
char    *ft_adjust_map(char *map, int nbt);
char    *ft_algo_map(char *map, int nbt);
void    ft_algomino(char **tab);
char    **ft_alphamino(char **tab);
int		ft_tetri_base_map(char *map, int nbt, int r, int a);
void    ft_print_map(char *map, int nbt);


#endif
