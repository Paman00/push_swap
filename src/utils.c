/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:50:36 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/31 08:28:08 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_dlist	*node;

	node = stack->top;
	while (node->next != NULL)
	{
		if (((t_content *)node->content)->target_i
			> ((t_content *)node->next->content)->target_i)
			return (0);
		node = node->next;
	}
	return (1);
}

int	get_max_index(t_stack *stack)
{
	t_dlist	*node;
	int		max;

	node = stack->top;
	max = -1;
	while (node != NULL)
	{
		if (((t_content *)node->content)->target_i > max)
			max = ((t_content *)node->content)->target_i;
		node = node->next;
	}
	return (max);
}

int	get_position(t_stack *stack, int target_i)
{
	t_dlist		*node;
	int			i;

	node = stack->top;
	i = 0;
	while (node != NULL)
	{
		if (((t_content *)node->content)->target_i == target_i)
			return (i);
		node = node->next;
		i++;
	}
	return (-1);
}
