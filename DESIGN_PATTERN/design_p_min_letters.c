/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_min_letters.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:26:59 by wolf              #+#    #+#             */
/*   Updated: 2023/12/29 23:46:31 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_key.h"

t_gk_min_letters	*gk_min_letters_instance(void)
{
	static t_gk_min_letters	instance;

	return (&instance);
}

/*
		To init all basic stuff of min letters array
*/

void	gk_min_letters_init(void)
{
	t_gk_min_letters	*instance;
	static int			done;
	int					i;

	if (done != 0)
		return ;
	instance = gk_min_letters_instance();
	i = -1;
	while (++i < GK_MIN_LETTERS)
		instance->gk_ml_code[i] = false;
	done++ ;
}

/*
		To get array's bool value by min letter id
*/

bool	gk_get_min_letter_value_by_name(char min_letter)
{
	t_gk_min_letters	*instance;

	instance = gk_min_letters_instance();
	if (min_letter >= 97 AND min_letter <= 122)
		return (instance->gk_ml_code[(int)min_letter]);
	return (false);
}

/*
		To change value at [pos] index
*/

void	gk_min_letters_modif(int pos, bool status)
{
	t_gk_min_letters	*instance;

	instance = gk_min_letters_instance();
	if (pos < 0 AND pos > GK_MIN_LETTERS)
		return ;
	instance->gk_ml_code[pos] = status;
}
