/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_combo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:01:26 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:48:04 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "key_press_release.h"

bool	gk_check_combo(unsigned int minletter, unsigned int modifkey)
{
	if (gk_get_min_letter_value_by_name(minletter) AND
		gk_get_modif_key_value_by_id(modifkey))
		return (gk_key_release(gk_get_keycode()), true);
	return (false);
}

bool	gk_check_min_letter(unsigned int minletter)
{
	if (gk_get_min_letter_value_by_name(minletter))
		return (true);
	return (false);
}

bool	gk_check_modif_key(unsigned int modifkey)
{
	if (gk_get_modif_key_value_by_id(modifkey))
		return (gk_key_release(gk_get_keycode()), true);
	return (false);
}

bool	gk_check_if_maj_letter(int minletter)
{
	if (gk_check_combo(minletter, K_ID_LSHIFT)
		OR
		gk_check_combo(minletter, K_ID_RSHIFT))
		return (true);
	return (false);
}

bool	gk_check_if_clean_key(void)
{
	t_gk_modification_keys	*all_modif_keys;
	int						idx;

	all_modif_keys = gk_modif_key_instance();
	idx = 0;
	while (idx < GK_MODIF_KEYS)
	{
		if (gk_get_modif_key_value_by_id(all_modif_keys->gk_modif_k_id[idx]))
			return (false);
		idx++ ;
	}
	return (true);
}
