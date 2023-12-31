/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_pattern.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:59:29 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:07:13 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DESIGN_PATTERN_H
# define DESIGN_PATTERN_H

typedef struct s_mlx_stuff
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr;
}t_mlx_stuff;

typedef struct s_gk_min_letters
{
	bool	gk_ml_code[26];
}t_gk_min_letters;

typedef struct s_gk_modification_keys
{
	bool	gk_modif_kcode[GK_MODIF_KEYS];
	int		gk_modif_k_id[GK_MODIF_KEYS];
}t_gk_modification_keys;

typedef void	(*t_event_f)(void);

typedef struct s_gk_keycode
{
	int	kc;
}t_gk_keycode;

t_gk_modification_keys	*gk_modif_key_instance(void);
t_gk_min_letters		*gk_min_letters_instance(void);

t_gk_keycode			*gk_get_keycode_instance(void);
void					gk_update_keycode(int kc);
int						gk_get_keycode(void);

t_mlx_stuff				*mlx_instance(void);
void					update_mlx_infos(void *mlx_ptr,
							void *win_ptr, void *img_ptr);
void					*get_mlx_ptr(void);
void					*get_win_ptr(void);
void					free_mlx_infos(void);

bool					gk_get_min_letter_value_by_name(char min_letter);
bool					gk_get_modif_key_value_by_id(int modif_keycode);

void					gk_min_letters_init(void);
void					gk_modif_keys_init(void);
void					gk_modif_key_init_id(t_gk_modification_keys *instance);
void					gk_modif_key_init_code(
							t_gk_modification_keys *instance);

void					gk_modif_key_changes(int pos, bool status);
void					gk_min_letters_modif(int pos, bool status);

int						gk_modif_key_pos_by_id(int keycode);

#endif
