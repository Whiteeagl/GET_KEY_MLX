/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_modif_keys2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:29:23 by wolf              #+#    #+#             */
/*   Updated: 2023/12/30 14:44:55 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_key.h"

/*
		To change value at [pos] index
*/

void	gk_modif_key_changes(int pos, bool status)
{
	t_gk_modification_keys	*instance;
	int						idx;

	instance = gk_modif_key_instance();
	if (pos < 0 AND pos > GK_MODIF_KEYS)
		return ;
	idx = gk_modif_key_pos_by_id(pos);
	instance->gk_modif_kcode[idx] = status;
}

/*
		Get keycode pos by id
*/

int	gk_modif_key_pos_by_id(int keycode)
{
	t_gk_modification_keys	*instance;
	int						i;

	instance = gk_modif_key_instance();
	i = 0;
	while (instance->gk_modif_k_id[i] != keycode AND i < GK_MODIF_KEYS)
		i++;
	if (i == GK_MODIF_KEYS)
		return (-1);
	return (i);
}

/*
		Upgrade key value by id
*/

bool	gk_get_modif_key_value_by_id(int modif_keycode)
{
	t_gk_modification_keys	*instance;
	int						pos;

	instance = gk_modif_key_instance();
	pos = gk_modif_key_pos_by_id(modif_keycode);
	return (instance->gk_modif_kcode[pos]);
}
