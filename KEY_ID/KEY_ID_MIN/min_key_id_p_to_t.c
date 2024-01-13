/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_key_id_p_to_t.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:23:29 by wolf              #+#    #+#             */
/*   Updated: 2024/01/13 20:11:55 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../key_id.h"

bool	k_min_p(void)
{
	if (gk_check_min_letter('p') AND gk_check_if_clean_key())
		return (true);
	return (false);
}

bool	k_min_q(void)
{
	if (gk_check_min_letter('q') AND gk_check_if_clean_key())
		return (true);
	return (false);
}

bool	k_min_r(void)
{
	if (gk_check_min_letter('r') AND gk_check_if_clean_key())
		return (true);
	return (false);
}

bool	k_min_s(void)
{
	if (gk_check_min_letter('s') AND gk_check_if_clean_key())
		return (true);
	return (false);
}

bool	k_min_t(void)
{
	if (gk_check_min_letter('t') AND gk_check_if_clean_key())
		return (true);
	return (false);
}
