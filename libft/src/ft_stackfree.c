/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackfree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 23:37:58 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/24 23:39:15 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_stack	*ft_stackfree(t_stack **stack, void (*del)(void *))
{
	if (stack == NULL || *stack == NULL)
		return (NULL);
	ft_stackclear(*stack, del);
	free(*stack);
	*stack = NULL;
	return (NULL);
}
