/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_key_id_z.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:18:50 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:46:57 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../key_id.h"

bool	k_min_z(void)
{
	if (gk_check_min_letter('z') AND gk_check_if_clean_key())
		return (gk_key_release(gk_get_keycode()), true);
	return (false);
}
