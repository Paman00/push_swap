/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 23:36:46 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/25 01:39:23 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stackclear(t_stack *stack, void (*del)(void *))
{
	if (stack == NULL)
		return ;
	while (stack->size > 0)
		ft_stackpopfree(stack, del);
}
