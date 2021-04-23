/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <gunkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:54:12 by gunkim            #+#    #+#             */
/*   Updated: 2021/04/23 18:20:56 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_image		t_image;
typedef struct s_scene		t_scene;
typedef struct s_ctrl		t_ctrl;

struct				s_image
{
	void		*img_ptr;
	char		*data;
	int			bit_per_pixel;
	int			size_line;
	int			endian;
};

struct				s_scene
{
	int			width;
	int			height;
};

struct				s_ctrl
{
	void		*mlx_ptr;
	void		*win_ptr;
	t_image		img;
	t_scene		scene;
};

#endif
