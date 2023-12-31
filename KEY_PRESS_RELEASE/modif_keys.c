/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_keys.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 00:33:14 by wolf              #+#    #+#             */
/*   Updated: 2023/12/31 17:38:36 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "key_press_release.h"

int	gk_m_k(void)
{
	if (k_up())
		return (pstd("⇡ "));
	if (k_left())
		return (pstd("⇠ "));
	if (k_right())
		return (pstd("⇢ "));
	if (k_down())
		return (pstd("⇣ "));
	if (k_tab())
		return (pstd("\t"));
	if (k_space())
		return (pstd(" "));
	return (0);
}
