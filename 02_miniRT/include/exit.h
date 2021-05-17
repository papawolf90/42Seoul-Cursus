/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 00:57:06 by gunkim            #+#    #+#             */
/*   Updated: 2021/05/18 01:19:59 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXIT_H
# define EXIT_H

# include "struct.h"

void			ft_exit_minirt(t_ctrl *ctrl);

void			ft_destroy_mlx(t_ctrl *ctrl);
void			ft_free_scene(t_scene *scene);


#endif