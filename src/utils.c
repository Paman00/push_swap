/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:50:36 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/30 19:16:58 by migugar2         ###   ########.fr       */
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

void	push_shortest(t_push_swap *ps, t_stack *stack, char keyfrom)
{
	t_dlist	*node;
	t_dlist	*shortest;
	int		i;

	node = stack->top;
	shortest = node;
	i = 0;
	while (node != NULL)
	{
		if (((t_content *)node->content)->target_i
			< ((t_content *)shortest->content)->target_i)
		{
			shortest = node;
			i = 0;
		}
		i++;
		node = node->next;
	}
	if (i < (int)stack->size / 2)
		while (stack->top != shortest)
			do_rev_rotate(ps, keyfrom);
	else
		while (stack->top != shortest)
			do_rotate(ps, keyfrom);
	do_push(ps, get_oposite(keyfrom));
}

void	sort_3(t_push_swap *ps, t_stack *stack, char key)
{
	int	top;
	int	mid;
	int	bot;

	top = ((t_content *)stack->top->content)->target_i;
	mid = ((t_content *)stack->top->next->content)->target_i;
	bot = ((t_content *)stack->top->next->next->content)->target_i;
	if (bot > top && bot > mid && top > mid)
		do_swap(ps, key);
	else if (top > mid && top > bot && mid > bot)
	{
		do_rotate(ps, key);
		do_swap(ps, key);
	}
	else if (top > mid && top > bot && bot > mid)
		do_rotate(ps, key);
	else if (mid > top && mid > bot && bot > top)
	{
		do_swap(ps, key);
		do_rotate(ps, key);
	}
	else if (mid > top && mid > bot && top > bot)
		do_rev_rotate(ps, key);
}

void	sort_5_or_less(t_push_swap *ps, t_stack *stack, char key)
{
	if (stack->size == 2)
	{
		if (((t_content *)stack->top->content)->value
			> ((t_content *)stack->top->next->content)->value)
			do_swap(ps, key);
	}
	else if (stack->size == 3)
		sort_3(ps, stack, key);
	else if (stack->size == 4)
	{
		push_shortest(ps, stack, key);
		sort_3(ps, stack, key);
		do_push(ps, key);
	}
	else if (stack->size == 5)
	{
		push_shortest(ps, stack, key);
		push_shortest(ps, stack, key);
		sort_3(ps, stack, key);
		do_push(ps, key);
		do_push(ps, key);
	}
}
