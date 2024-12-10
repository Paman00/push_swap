/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:53:13 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/10 19:55:16 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rra(t_push_swap *ps)
{
	ft_stackrotaterev(ps->a);
	printer_instruction(PS_RRA);
}

void	do_rrb(t_push_swap *ps)
{
	ft_stackrotaterev(ps->b);
	printer_instruction(PS_RRB);
}

void	do_rrr(t_push_swap *ps)
{
	ft_stackrotaterev(ps->a);
	ft_stackrotaterev(ps->b);
	printer_instruction(PS_RRR);
}
