/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortshort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:15:32 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/31 08:28:29 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a_shortest(t_push_swap *ps)
{
	t_dlist	*node;
	t_dlist	*shortest;
	int		i;

	node = ps->a->top;
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
	if (i < (int)ps->b->size / 2)
		while (ps->b->top != shortest)
			do_rrb(ps);
	else
		while (ps->b->top != shortest)
			do_rb(ps);
	do_pa(ps);
}

void	push_b_shortest(t_push_swap *ps)
{
	t_dlist	*node;
	t_dlist	*shortest;
	int		i;

	node = ps->a->top;
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
	if (i < (int)ps->a->size / 2)
		while (ps->a->top != shortest)
			do_rra(ps);
	else
		while (ps->a->top != shortest)
			do_ra(ps);
	do_pb(ps);
}

void	sort_3_a(t_push_swap *ps)
{
	int	top;
	int	mid;
	int	bot;

	top = ((t_content *)ps->a->top->content)->target_i;
	mid = ((t_content *)ps->a->top->next->content)->target_i;
	bot = ((t_content *)ps->a->top->next->next->content)->target_i;
	if (bot > top && bot > mid && top > mid)
		do_sa(ps);
	else if (top > mid && top > bot && mid > bot)
	{
		do_ra(ps);
		do_sa(ps);
	}
	else if (top > mid && top > bot && bot > mid)
		do_ra(ps);
	else if (mid > top && mid > bot && bot > top)
	{
		do_sa(ps);
		do_ra(ps);
	}
	else if (mid > top && mid > bot && top > bot)
		do_rra(ps);
}

void	sort_5_or_less_a(t_push_swap *ps)
{
	if (ps->a->size == 2)
	{
		if (((t_content *)ps->a->top->content)->value
			> ((t_content *)ps->a->top->next->content)->value)
			do_sa(ps);
	}
	else if (ps->a->size == 3)
		sort_3_a(ps);
	else if (ps->a->size == 4)
	{
		push_b_shortest(ps);
		sort_3_a(ps);
		do_pa(ps);
	}
	else if (ps->a->size == 5)
	{
		push_b_shortest(ps);
		push_b_shortest(ps);
		sort_3_a(ps);
		do_pa(ps);
		do_pa(ps);
	}
}
