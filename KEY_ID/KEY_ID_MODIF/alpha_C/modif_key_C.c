/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_key_C.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 13:07:19 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:43:49 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../key_id.h"

bool	k_ctrl(void)
{
	if (gk_check_modif_key(K_ID_CTRL))
		return (true);
	return (false);
}

bool	k_ctrr(void)
{
	if (gk_check_modif_key(K_ID_CTRR))
		return (true);
	return (false);
}
