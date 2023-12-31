/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maj_key_id_K_to_O.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:35:40 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:47:32 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../key_id.h"

bool	k_maj_k(void)
{
	return (gk_check_if_maj_letter('k'));
}

bool	k_maj_l(void)
{
	return (gk_check_if_maj_letter('l'));
}

bool	k_maj_m(void)
{
	return (gk_check_if_maj_letter('m'));
}

bool	k_maj_n(void)
{
	return (gk_check_if_maj_letter('n'));
}

bool	k_maj_o(void)
{
	return (gk_check_if_maj_letter('o'));
}
