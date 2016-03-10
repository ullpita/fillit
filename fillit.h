/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbompoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 16:56:39 by mbompoil          #+#    #+#             */
/*   Updated: 2016/02/02 14:56:41 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*ft_read_arg(int argc, char **argv, int i);
int		ft_bigcheck(char **tab);
int		ft_strijcheck(char *str);
int		ft_slashcheck(char *str);
int		ft_tetricheck(char *str);
char	**ft_strsplit(char *s, char c);
char	*ft_strsub(char *s, unsigned int start, size_t size);

#endif
