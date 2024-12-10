/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:50:36 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/10 21:16:00 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	get_oposite(char key)
{
	if (key == 'b')
		return ('a');
	else
		return ('b');
}

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
