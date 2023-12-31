/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maj_key_id_A_to_E.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:47:15 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:47:32 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../key_id.h"

bool	k_maj_a(void)
{
	return (gk_check_if_maj_letter('a'));
}

bool	k_maj_b(void)
{
	return (gk_check_if_maj_letter('b'));
}

bool	k_maj_c(void)
{
	return (gk_check_if_maj_letter('c'));
}

bool	k_maj_d(void)
{
	return (gk_check_if_maj_letter('d'));
}

bool	k_maj_e(void)
{
	return (gk_check_if_maj_letter('e'));
}
