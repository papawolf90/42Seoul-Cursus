/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_color.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <gunkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 00:19:29 by gunkim            #+#    #+#             */
/*   Updated: 2021/04/23 18:25:31 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

int			ft_rgb_to_data(t_color *color)
{
	color->x *= 255.999;
	color->y *= 255.999;
	color->z *= 255.999;
	return ((int)color->x << 16 | (int)(color->y) << 8 | (int)color->z);
}
