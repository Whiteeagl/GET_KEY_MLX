/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_key_R.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 13:07:19 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:43:49 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../key_id.h"

bool	k_return(void)
{
	if (gk_check_modif_key(K_ID_RETURN))
		return (true);
	return (false);
}

bool	k_right(void)
{
	if ((gk_check_modif_key(K_ID_RIGHT)))
		return (true);
	return (false);
}

bool	k_right_alt(void)
{
	if (gk_check_modif_key(K_ID_RALT))
		return (true);
	return (false);
}

bool	k_right_shift(void)
{
	if ((gk_check_modif_key(K_ID_RSHIFT)))
		return (true);
	return (false);
}
