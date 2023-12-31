/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press_release.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:59:47 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 18:24:13 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEY_PRESS_RELEASE_H
# define KEY_PRESS_RELEASE_H

# include "../get_key.h"

bool	gk_check_combo(unsigned int minletter,
			unsigned int modifkey);
bool	gk_check_min_letter(unsigned int minletter);
bool	gk_check_modif_key(unsigned int modifkey);
bool	gk_check_if_maj_letter(int minletter);
bool	gk_check_if_clean_key(void);

void	gk_l_maj_all(void);
void	gk_l_min_all(void);

int		gk_l_maj_a_to_h(void);
int		gk_l_maj_i_q(void);
int		gk_l_maj_r_to_z(void);

int		gk_l_min_a_to_h(void);
int		gk_l_min_i_q(void);
int		gk_l_min_r_to_z(void);

int		gk_m_k(void);

int		gk_key_press(int keycode);
int		gk_key_release(int keycode);

#endif