/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbompoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 16:56:39 by mbompoil          #+#    #+#             */
/*   Updated: 2016/01/20 18:03:37 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*ft_read_arg(int argc, char **argv, int i);
int		ft_bigcheck();
int		ft_strijcheck(char *str);
int		ft_slashcheck(char *str);
int		ft_grillecheck(char *str);
#endif
