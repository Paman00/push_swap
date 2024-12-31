/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:37:56 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/31 08:09:01 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	best_rotate_b(t_push_swap *ps, int index)
{
	int	pos;

	pos = get_position(ps->b, index);
	if (pos <= (int)ps->b->size / 2)
		while (((t_content *)ps->b->top->content)->target_i != index)
			do_rb(ps);
	else
		while (((t_content *)ps->b->top->content)->target_i != index)
			do_rrb(ps);
}

void	move_to_b(t_push_swap *ps)
{
	t_content	*content;
	int			k;

	k = ft_sqrt(ps->a->size) * 1.4;
	while (ps->a->size > 0)
	{
		content = (t_content *)ps->a->top->content;
		if (content->target_i <= (int)ps->b->size)
			do_pb(ps);
		else if (content->target_i <= (int)ps->b->size + k)
		{
			do_pb(ps);
			do_rb(ps);
		}
		else
			do_ra(ps);
	}
}

void	move_to_a(t_push_swap *ps)
{
	int	i;

	while (ps->b->size > 0)
	{
		i = get_max_index(ps->b);
		best_rotate_b(ps, i);
		do_pa(ps);
	}
}

void	algorithm(t_push_swap *ps)
{
	if (is_sorted(ps->a))
		return ;
	if (ps->a->size <= 5)
		sort_5_or_less_a(ps);
	else
	{
		move_to_b(ps);
		move_to_a(ps);
	}
	end_printer_instruction();
}
