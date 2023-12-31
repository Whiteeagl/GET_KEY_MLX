/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_key_L.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 13:07:19 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:43:49 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../key_id.h"

bool	k_left(void)
{
	if ((gk_check_modif_key(K_ID_LEFT)))
		return (true);
	return (false);
}

bool	k_left_alt(void)
{
	if (gk_check_modif_key(K_ID_LALT))
		return (true);
	return (false);
}

bool	k_left_shift(void)
{
	if ((gk_check_modif_key(K_ID_LSHIFT)))
		return (true);
	return (false);
}
