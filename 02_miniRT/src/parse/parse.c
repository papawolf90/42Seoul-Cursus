/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <gunkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:31:51 by gunkim            #+#    #+#             */
/*   Updated: 2021/04/30 01:53:47 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "struct.h"
#include "vector.h"
#include "alias.h"

void		ft_parse_rt(t_ctrl *ctrl, char *rt_file)
{
	ctrl->scene = (t_scene *)malloc(sizeof(t_scene));
	ctrl->scene->canv.width = 2000;
	ctrl->scene->canv.height = 2000;
	ctrl->scene->canv.aspect_ratio = (double)2000 / (double)2000;
	ft_camera_list_init(ctrl->scene);
	ft_camera_list(ft_camera(V_SET(0, 0, 0), 2.0, 1.0, ctrl->scene->canv.aspect_ratio), ctrl->scene);
	ft_object_list_init(ctrl->scene);
	ft_object_list(sp, ft_sphere(V_POINT(0, -0.5, -4), 0.5, V_COLOR(0.616, 0.710, 0.800)), ctrl->scene);
	ft_object_list(sp, ft_sphere(V_POINT(1, -0.5, -4), 0.5, V_COLOR(0.6, 0.714, 0.675)), ctrl->scene);
	ft_object_list(sp, ft_sphere(V_POINT(-1, -0.5, -4), 0.5, V_COLOR(0.933, 0.682, 0.639)), ctrl->scene);
	ft_object_list(pl, ft_plane(V_POINT(0, -1, 0), V_SET(0, 1, 0), V_COLOR(0.635, 0.639, 0.769)), ctrl->scene);
	ft_object_list(pl, ft_plane(V_POINT(-1.5, 0, 0), V_SET(1, 0, 0), V_COLOR(0.635, 0.639, 0.769)), ctrl->scene);
	ft_object_list(pl, ft_plane(V_POINT(1.5, 0, 0), V_SET(-1, 0, 0), V_COLOR(0.635, 0.639, 0.769)), ctrl->scene);
	ft_object_list(pl, ft_plane(V_POINT(0, 0, -5), V_SET(0, 0, 1), V_COLOR(0.635, 0.639, 0.769)), ctrl->scene);
	ft_object_list(pl, ft_plane(V_POINT(0, 2, 0), V_SET(0, -1, 0), V_COLOR(0.635, 0.639, 0.769)), ctrl->scene);
	ft_light_list_init(ctrl->scene);
	ft_light_list(ft_light(V_SET(0, 1.5, 1), V_COLOR(1, 1, 1)), ctrl->scene);
	/* to avoid warning */
	rt_file = NUL;
	/* to avoid warning */
}