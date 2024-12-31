/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackrotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 00:44:27 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/25 00:56:34 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stackrotate(t_stack *stack)
{
	t_dlist	*node;

	if (stack == NULL || stack->size < 2)
		return ;
	node = stack->top;
	stack->top = stack->top->next;
	stack->top->prev = NULL;
	stack->bottom->next = node;
	node->prev = stack->bottom;
	node->next = NULL;
	stack->bottom = node;
}
