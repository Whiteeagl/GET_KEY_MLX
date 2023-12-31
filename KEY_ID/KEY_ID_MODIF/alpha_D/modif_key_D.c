/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_key_D.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 13:07:19 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:44:16 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../key_id.h"

bool	k_delete(void)
{
	if (gk_check_modif_key(K_ID_DELETE))
		return (true);
	return (false);
}

bool	k_down(void)
{
	if ((gk_check_modif_key(K_ID_DOWN)))
		return (true);
	return (false);
}
