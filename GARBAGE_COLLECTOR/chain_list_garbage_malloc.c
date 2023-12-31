/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_list_garbage_malloc.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:44:11 by wolf              #+#    #+#             */
/*   Updated: 2023/12/29 23:46:31 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "garbage_collector.h"

t_garbage	*get_garbage_instance(void)
{
	static t_garbage	instance;

	return (&instance);
}

t_garbage	*start_garbage(void)
{
	t_garbage	*garbage;

	garbage = get_garbage_instance();
	garbage->head = NULL;
	garbage->tail = NULL;
	garbage->len_of_lst = 0;
	return (garbage);
}

t_garbage_lst	*new_elmt(void *pointer_to)
{
	t_garbage_lst	*new;

	new = malloc(sizeof(t_garbage_lst));
	if (!new)
		free_all_memory_stuff("new_elmt");
	if (!pointer_to)
		new->pointer = NULL;
	else
		new->pointer = pointer_to;
	new->next = NULL;
	return (new);
}

// Doit etre call quAND nouvelle allocation
void	garbage_add(void *pointer)
{
	t_garbage		*garbage;
	t_garbage_lst	*new;

	garbage = get_garbage_instance();
	new = new_elmt(pointer);
	if (garbage->head == NULL)
	{
		garbage->head = new;
		garbage->tail = new;
	}
	else
	{
		garbage->tail->next = new;
		garbage->tail = garbage->tail->next;
	}
	garbage->len_of_lst++;
}

// Doit etre call dans les secu ft_malloc
void	free_garbage(void)
{
	t_garbage		*garbage;
	t_garbage_lst	*save;
	int				i;

	i = -1;
	garbage = get_garbage_instance();
	save = garbage->head;
	while (++i < garbage->len_of_lst)
	{
		if (save->pointer)
		{
			free(save->pointer);
			save->pointer = NULL;
		}
		garbage->head = save->next;
		free(save);
		save = garbage->head;
	}
}
