/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <gunkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:54:12 by gunkim            #+#    #+#             */
/*   Updated: 2021/05/02 04:13:03 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include "ray.h"
# include "alias.h"
# include "color.h"

typedef struct s_image			t_image;
typedef struct s_ctrl			t_ctrl;
typedef struct s_canvas			t_canvas;
typedef struct s_scene			t_scene;

typedef struct s_hit_record		t_hit_rec;
typedef struct s_object_list	t_object_list;
// typedef struct s_camera_list	t_camera_list;
// typedef struct s_light_list		t_light_list;

typedef struct s_camera			t_camera;
typedef struct s_light			t_light;
typedef struct s_sphere			t_sphere;
typedef struct s_plane			t_plane;
typedef struct s_square			t_square;

typedef enum e_object_type		t_object_type;

enum e_object_type
{
	cam = 1,
	l = 2,
	sp = 3,
	pl = 4,
	sq = 5
};

struct				s_image
{
	void			*img_ptr;
	char			*data;
	int				bit_per_pixel;
	int				size_line;
	int				endian;
};

struct				s_ctrl
{
	void			*mlx_ptr;
	void			*win_ptr;
	t_image			img;
	t_scene			*scene;
};

struct				s_canvas
{
	int				width;
	int				height;
	double			aspect_ratio;
};

struct				s_scene
{
	t_canvas		canv;
	t_object_list	*object_list;
	t_object_list	*camera_list;
	t_object_list	*light_list;
};

struct s_object_list
{
	void			*object;
	t_object_type	type;
	t_object_list	*next;
};

struct s_hit_record
{
	t_point3		p;
	t_vec3			normal;
	double			t_min;
	double			t_max;
	double			t;
	t_front			front_face;
	t_color			color;
};

struct s_square
{
	t_point3		center;
	t_vec3			normal;
	double			side_size;
	t_color			color;
	t_vec3			span_a;
	t_vec3			span_b;
};

struct s_plane
{
	t_point3		point;
	t_vec3			normal;
	t_color			color;
};

struct s_sphere
{
	t_point3		center;
	double			radius;
	t_color			color;
};

struct				s_light
{
	t_point3		p;
	t_color			color;
};

struct				s_camera
{
	double			view_h;
	double			view_w;
	t_point3		origin;
	t_vec3			vertical;
	t_vec3			horizontal;
	double			focal_len;
	t_point3		left_top;
};

void			ft_object_list_init(t_scene *s);
void			ft_object_list(t_object_type type, void *object, t_object_list *list);
t_sphere		*ft_sphere(t_point3 center, double radius, t_color color);
t_plane			*ft_plane(t_point3 point, t_vec3 normal, t_color color);
t_square		*ft_square(t_point3 center, t_vec3 normal, double side_size, t_color color);

void			ft_camera_list_init(t_scene *s);
void			ft_camera_list(void *camera, t_scene *s);
t_camera		*ft_camera(t_point3 orig, double v_height, double focal_length, double ratio);

void			ft_light_list_init(t_scene *s);
void			ft_light_list(void *light, t_scene *s);
t_light			*ft_light(t_point3 point, t_color color);

#endif
