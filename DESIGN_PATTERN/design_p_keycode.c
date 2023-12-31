/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_keycode.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:32:21 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 13:12:08 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_key.h"

t_gk_keycode	*gk_get_keycode_instance(void)
{
	static t_gk_keycode	instance;

	return (&instance);
}

void	gk_update_keycode(int kc)
{
	t_gk_keycode	*instance;

	instance = gk_get_keycode_instance();
	instance->kc = kc;
}

int	gk_get_keycode(void)
{
	t_gk_keycode	*instance;

	instance = gk_get_keycode_instance();
	return (instance->kc);
}
