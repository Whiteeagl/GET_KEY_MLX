/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_modif_keys.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:26:59 by wolf              #+#    #+#             */
/*   Updated: 2023/12/30 14:39:54 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_key.h"

t_gk_modification_keys	*gk_modif_key_instance(void)
{
	static t_gk_modification_keys	instance;

	return (&instance);
}

/*
		To init all basic stuff of min letters array
*/

void	gk_modif_keys_init(void)
{
	t_gk_modification_keys	*instance;
	static int				done;

	if (done != 0)
		return ;
	instance = gk_modif_key_instance();
	gk_modif_key_init_code(instance);
	gk_modif_key_init_id(instance);
	done++ ;
}

void	gk_modif_key_init_code(t_gk_modification_keys *instance)
{
	int	i;

	i = 0;
	while (i < GK_MODIF_KEYS)
	{
		instance->gk_modif_kcode[i] = false;
		i++ ;
	}
}

void	gk_modif_key_init_id(t_gk_modification_keys *instance)
{
	instance->gk_modif_k_id[0] = K_ID_RETURN;
	instance->gk_modif_k_id[1] = K_ID_ESCAPE;
	instance->gk_modif_k_id[2] = K_ID_BACKSPACE;
	instance->gk_modif_k_id[3] = K_ID_TAB;
	instance->gk_modif_k_id[4] = K_ID_DELETE;
	instance->gk_modif_k_id[5] = K_ID_LEFT;
	instance->gk_modif_k_id[6] = K_ID_UP;
	instance->gk_modif_k_id[7] = K_ID_RIGHT;
	instance->gk_modif_k_id[8] = K_ID_DOWN;
	instance->gk_modif_k_id[9] = K_ID_LSHIFT;
	instance->gk_modif_k_id[10] = K_ID_RSHIFT;
	instance->gk_modif_k_id[11] = K_ID_CTRL;
	instance->gk_modif_k_id[12] = K_ID_CTRR;
	instance->gk_modif_k_id[13] = K_ID_LALT;
	instance->gk_modif_k_id[14] = K_ID_RALT;
	instance->gk_modif_k_id[15] = K_ID_SPACE;
}
