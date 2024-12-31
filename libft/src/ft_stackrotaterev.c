/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackrotaterev.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 00:57:04 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/25 01:03:04 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stackrotaterev(t_stack *stack)
{
	t_dlist	*node;

	if (stack == NULL || stack->size < 2)
		return ;
	node = stack->bottom;
	stack->bottom = stack->bottom->prev;
	stack->bottom->next = NULL;
	stack->top->prev = node;
	node->next = stack->top;
	node->prev = NULL;
	stack->top = node;
}
