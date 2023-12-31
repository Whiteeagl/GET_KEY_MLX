/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_collector.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:59:43 by wolf              #+#    #+#             */
/*   Updated: 2023/12/30 00:16:52 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GARBAGE_COLLECTOR_H
# define GARBAGE_COLLECTOR_H

# define A_FUNC	__FUNCTION__

# include <stdlib.h>
# include "../ERRORS_STUFF/errors_stuff.h"

typedef struct s_garbage_lst
{	
	void					*pointer;
	struct s_garbage_lst	*next;	
}t_garbage_lst;

typedef struct s_garbage
{
	int						len_of_lst;
	t_garbage_lst			*head;
	t_garbage_lst			*tail;
}t_garbage;

t_garbage	*start_garbage(void);

void		*ft_malloc(size_t size);
void		free_garbage(void);
void		garbage_add(void *pointer);

#endif