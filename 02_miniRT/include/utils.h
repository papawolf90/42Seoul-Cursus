/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <gunkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 12:01:24 by gunkim            #+#    #+#             */
/*   Updated: 2021/05/15 16:16:37 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stddef.h>

/*
** utils_cmp.c
*/
double			ft_max(double a, double b);
double			ft_min(double a, double b);
double			ft_saturate(double a);

/*
** utils_str.c
*/
int				ft_is_endstr(char *big, char *little);

t_bool			ft_is_integer(char *s);
char			**ft_split_rt(char *s, char *c);
size_t			ft_strslen(char **strs);

#endif
