/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpushnew.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:45:38 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/25 01:20:31 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_dlist	*ft_stackpushnew(t_stack *stack, void *content)
{
	t_dlist	*node;

	if (stack == NULL)
		return (NULL);
	node = ft_dlstnew(content);
	if (node == NULL)
		return (NULL);
	if (stack->size == 0)
	{
		stack->top = node;
		stack->bottom = node;
	}
	else
		ft_dlstadd_front(&stack->top, node);
	stack->size++;
	return (node);
}
