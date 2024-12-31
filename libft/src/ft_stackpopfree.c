/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpopfree.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 23:14:27 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/25 01:45:44 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

size_t	ft_stackpopfree(t_stack *stack, void (*del)(void *))
{
	t_dlist	*node;

	if (stack == NULL || stack->size == 0)
		return (0);
	node = ft_stackpop(stack);
	if (node)
		ft_dlstdelone(&node, del);
	return (stack->size);
}
