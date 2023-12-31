/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press_release.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:50:41 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:47:12 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "key_press_release.h"
#include <stdio.h>

int	gk_key_press(int keycode)
{
	if (keycode >= 97 AND keycode <= 122)
		return (gk_min_letters_modif(keycode, true), 0);
	if (gk_modif_key_pos_by_id(keycode) != -1)
		return (gk_modif_key_changes(keycode, true), 0);
	return (1);
}

int	gk_key_release(int keycode)
{
	if (keycode >= 97 AND keycode <= 122)
		gk_min_letters_modif(keycode, false);
	if (gk_modif_key_pos_by_id(keycode) != -1)
		return (gk_modif_key_changes(keycode, false), 0);
	return (0);
}
