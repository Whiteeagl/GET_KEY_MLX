/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maj_letters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 23:28:48 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:38:17 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "key_press_release.h"

int	gk_l_maj_a_to_h(void)
{
	if (k_maj_a())
		return (pstd("A"));
	if (k_maj_b())
		return (pstd("B"));
	if (k_maj_c())
		return (pstd("C"));
	if (k_maj_d())
		return (pstd("D"));
	if (k_maj_e())
		return (pstd("E"));
	if (k_maj_f())
		return (pstd("F"));
	if (k_maj_g())
		return (pstd("G"));
	if (k_maj_h())
		return (pstd("H"));
	return (0);
}

int	gk_l_maj_i_q(void)
{
	if (k_maj_i())
		return (pstd("I"));
	if (k_maj_j())
		return (pstd("J"));
	if (k_maj_k())
		return (pstd("K"));
	if (k_maj_l())
		return (pstd("L"));
	if (k_maj_m())
		return (pstd("M"));
	if (k_maj_n())
		return (pstd("N"));
	if (k_maj_o())
		return (pstd("O"));
	if (k_maj_p())
		return (pstd("P"));
	if (k_maj_q())
		return (pstd("Q"));
	return (0);
}

int	gk_l_maj_r_to_z(void)
{
	if (k_maj_r())
		return (pstd("R"));
	if (k_maj_s())
		return (pstd("S"));
	if (k_maj_t())
		return (pstd("T"));
	if (k_maj_u())
		return (pstd("U"));
	if (k_maj_v())
		return (pstd("V"));
	if (k_maj_w())
		return (pstd("W"));
	if (k_maj_x())
		return (pstd("X"));
	if (k_maj_y())
		return (pstd("Y"));
	if (k_maj_z())
		return (pstd("Z"));
	return (0);
}

void	gk_l_maj_all(void)
{
	gk_l_maj_a_to_h();
	gk_l_maj_i_q();
	gk_l_maj_r_to_z();
}
