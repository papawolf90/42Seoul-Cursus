/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_move_z.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 01:24:12 by gunkim            #+#    #+#             */
/*   Updated: 2021/05/20 19:27:56 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "alias.h"
#include "event.h"
#include "struct.h"
#include "matrix.h"
#include "object.h"

int					ft_move_forward(t_ctrl *ctrl)
{
	t_vec3			trans;
	t_camera		*cam;

	trans = V_SET(0, 0, UNIT_MOVE);
	cam = (t_camera *)ft_return_object(ctrl->scene->camera_list, ctrl->scene->idx_c);
	cam->mat_c2w.trans = V_MINUS(cam->mat_c2w.trans, ft_linear_transform_rotate(cam->mat_c2w, trans));
	return (success);
}

int					ft_move_back(t_ctrl *ctrl)
{
	t_vec3			trans;
	t_camera		*cam;

	trans = V_SET(0, 0, -1 * UNIT_MOVE);
	cam = (t_camera *)ft_return_object(ctrl->scene->camera_list, ctrl->scene->idx_c);
	cam->mat_c2w.trans = V_MINUS(cam->mat_c2w.trans, ft_linear_transform_rotate(cam->mat_c2w, trans));
	return (success);
}
