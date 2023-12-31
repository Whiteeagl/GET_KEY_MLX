/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:06:02 by wolf              #+#    #+#             */
/*   Updated: 2023/12/30 16:09:34 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errors_stuff.h"

/*
		No leaks baby, no no no.
*/

void	free_all_memory_stuff(char *msg)
{
	u_write_msg_on_std(1, msg, true);
	free_garbage();
	free_mlx_infos();
	exit(0);
}
