/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_key_id_k_to_o.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:22:33 by wolf              #+#    #+#             */
/*   Updated: 2024/01/13 20:11:15 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../key_id.h"

bool	k_min_k(void)
{
	if (gk_check_min_letter('k') AND gk_check_if_clean_key())
		return (true);
	return (false);
}

bool	k_min_l(void)
{
	if (gk_check_min_letter('l') AND gk_check_if_clean_key())
		return (true);
	return (false);
}

bool	k_min_m(void)
{
	if (gk_check_min_letter('k') AND gk_check_if_clean_key())
		return (true);
	return (false);
}

bool	k_min_n(void)
{
	if (gk_check_min_letter('n') AND gk_check_if_clean_key())
		return (true);
	return (false);
}

bool	k_min_o(void)
{
	if (gk_check_min_letter('o') AND gk_check_if_clean_key())
		return (true);
	return (false);
}
