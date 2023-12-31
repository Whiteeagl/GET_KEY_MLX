/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_letters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 23:32:17 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:38:32 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "key_press_release.h"

int	gk_l_min_a_to_h(void)
{
	if (k_min_a())
		return (pstd("a"));
	if (k_min_b())
		return (pstd("b"));
	if (k_min_c())
		return (pstd("c"));
	if (k_min_d())
		return (pstd("d"));
	if (k_min_e())
		return (pstd("e"));
	if (k_min_f())
		return (pstd("f"));
	if (k_min_g())
		return (pstd("g"));
	if (k_min_h())
		return (pstd("h"));
	return (0);
}

int	gk_l_min_i_q(void)
{
	if (k_min_i())
		return (pstd("i"));
	if (k_min_j())
		return (pstd("j"));
	if (k_min_k())
		return (pstd("k"));
	if (k_min_l())
		return (pstd("l"));
	if (k_min_m())
		return (pstd("m"));
	if (k_min_n())
		return (pstd("n"));
	if (k_min_o())
		return (pstd("o"));
	if (k_min_p())
		return (pstd("p"));
	if (k_min_q())
		return (pstd("q"));
	return (0);
}

int	gk_l_min_r_to_z(void)
{
	if (k_min_r())
		return (pstd("r"));
	if (k_min_s())
		return (pstd("s"));
	if (k_min_t())
		return (pstd("t"));
	if (k_min_u())
		return (pstd("u"));
	if (k_min_v())
		return (pstd("v"));
	if (k_min_w())
		return (pstd("w"));
	if (k_min_x())
		return (pstd("x"));
	if (k_min_y())
		return (pstd("y"));
	if (k_min_z())
		return (pstd("z"));
	return (0);
}

void	gk_l_min_all(void)
{
	gk_l_min_a_to_h();
	gk_l_min_i_q();
	gk_l_min_r_to_z();
}
