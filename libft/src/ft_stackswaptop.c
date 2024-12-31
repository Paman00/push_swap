/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackswaptop.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 23:53:35 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/25 01:34:10 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stackswaptop(t_stack *stack)
{
	void	*content;

	if (stack == NULL || stack->size < 2)
		return ;
	content = stack->top->content;
	stack->top->content = stack->top->next->content;
	stack->top->next->content = content;
}
