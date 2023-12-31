/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_key_id_f_to_j.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:21:40 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:46:57 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../key_id.h"

bool	k_min_f(void)
{
	if (gk_check_min_letter('f') AND gk_check_if_clean_key())
		return (gk_key_release(gk_get_keycode()), true);
	return (false);
}

bool	k_min_g(void)
{
	if (gk_check_min_letter('g') AND gk_check_if_clean_key())
		return (gk_key_release(gk_get_keycode()), true);
	return (false);
}

bool	k_min_h(void)
{
	if (gk_check_min_letter('h') AND gk_check_if_clean_key())
		return (gk_key_release(gk_get_keycode()), true);
	return (false);
}

bool	k_min_i(void)
{
	if (gk_check_min_letter('i') AND gk_check_if_clean_key())
		return (gk_key_release(gk_get_keycode()), true);
	return (false);
}

bool	k_min_j(void)
{
	if (gk_check_min_letter('j') AND gk_check_if_clean_key())
		return (gk_key_release(gk_get_keycode()), true);
	return (false);
}
