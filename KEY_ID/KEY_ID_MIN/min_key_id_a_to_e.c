/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_key_id_a_to_e.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:18:50 by wolf              #+#    #+#             */
/*   Updated: 2024/01/13 20:11:41 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../key_id.h"

bool	k_min_a(void)
{
	if (gk_check_min_letter('a') AND gk_check_if_clean_key())
		return (true);
	return (false);
}

bool	k_min_b(void)
{
	if (gk_check_min_letter('b') AND gk_check_if_clean_key())
		return (true);
	return (false);
}

bool	k_min_c(void)
{
	if (gk_check_min_letter('c') AND gk_check_if_clean_key())
		return (true);
	return (false);
}

bool	k_min_d(void)
{
	if (gk_check_min_letter('d') AND gk_check_if_clean_key())
		return (true);
	return (false);
}

bool	k_min_e(void)
{
	if (gk_check_min_letter('e') AND gk_check_if_clean_key())
		return (true);
	return (false);
}
