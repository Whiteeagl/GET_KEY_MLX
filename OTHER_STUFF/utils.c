/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:50:34 by wolf              #+#    #+#             */
/*   Updated: 2023/12/30 16:00:12 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_key.h"
#include <unistd.h>

/*
		To get str len
*/

int	u_get_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++ ;
	return (i);
}

/*
		write some msg on fd arg
*/

void	u_write_msg_on_std(int fd, char *msg, bool endline)
{
	write(fd, msg, u_get_str_len(msg));
	if (endline)
		write(fd, "\n", 1);
}

int	pstd(char *msg)
{
	return (u_write_msg_on_std(1, msg, false), 0);
}
