/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerinput_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 23:48:15 by migugar2          #+#    #+#             */
/*   Updated: 2025/01/03 02:05:50 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	is_sorted(t_stack *stack)
{
	t_dlist	*node;

	node = stack->top;
	while (node->next != NULL)
	{
		if (*((int *)node->content) > *((int *)node->next->content))
			return (0);
		node = node->next;
	}
	return (1);
}

int	do_move(t_push_swap *ps, char *line)
{
	if (ft_strcmp(line, PS_SA) == '\n')
		do_sa(ps);
	else if (ft_strcmp(line, PS_SB) == '\n')
		do_sb(ps);
	else if (ft_strcmp(line, PS_SS) == '\n')
		do_ss(ps);
	else if (ft_strcmp(line, PS_PA) == '\n')
		do_pa(ps);
	else if (ft_strcmp(line, PS_PB) == '\n')
		do_pb(ps);
	else if (ft_strcmp(line, PS_RA) == '\n')
		do_ra(ps);
	else if (ft_strcmp(line, PS_RB) == '\n')
		do_rb(ps);
	else if (ft_strcmp(line, PS_RR) == '\n')
		do_rr(ps);
	else if (ft_strcmp(line, PS_RRA) == '\n')
		do_rra(ps);
	else if (ft_strcmp(line, PS_RRB) == '\n')
		do_rrb(ps);
	else if (ft_strcmp(line, PS_RRR) == '\n')
		do_rrr(ps);
	else
		return (-1);
	return (1);
}

int	check_stdin(t_push_swap *ps)
{
	char	*line;
	ssize_t	bytes_read;

	line = NULL;
	while (1)
	{
		bytes_read = get_next_line(0, &line);
		if (bytes_read == -1)
			return (-1);
		if (bytes_read == 0)
			break ;
		if (do_move(ps, line) == -1)
			return (ft_freestr(&line), -1);
		ft_freestr(&line);
	}
	ft_freestr(&line);
	return (1);
}

int	checker(t_push_swap *ps)
{
	if (check_stdin(ps) == -1)
		return (-1);
	if (ps->b->size == 0 && is_sorted(ps->a))
		ft_putendl_fd(1, "OK");
	else
		ft_putendl_fd(1, "KO");
	return (1);
}
