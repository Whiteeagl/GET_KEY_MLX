/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_key_id_u_to_y.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:24:02 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:46:57 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../key_id.h"

bool	k_min_u(void)
{
	if (gk_check_min_letter('u') AND gk_check_if_clean_key())
		return (gk_key_release(gk_get_keycode()), true);
	return (false);
}

bool	k_min_v(void)
{
	if (gk_check_min_letter('v') AND gk_check_if_clean_key())
		return (gk_key_release(gk_get_keycode()), true);
	return (false);
}

bool	k_min_w(void)
{
	if (gk_check_min_letter('w') AND gk_check_if_clean_key())
		return (gk_key_release(gk_get_keycode()), true);
	return (false);
}

bool	k_min_x(void)
{
	if (gk_check_min_letter('x') AND gk_check_if_clean_key())
		return (gk_key_release(gk_get_keycode()), true);
	return (false);
}

bool	k_min_y(void)
{
	if (gk_check_min_letter('y') AND gk_check_if_clean_key())
		return (gk_key_release(gk_get_keycode()), true);
	return (false);
}
