/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:40:22 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/10 19:42:55 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_pa(t_push_swap *ps)
{
	ft_stackmovetop(ps->b, ps->a);
	printer_instruction(PS_PA);
}

void	do_pb(t_push_swap *ps)
{
	ft_stackmovetop(ps->a, ps->b);
	printer_instruction(PS_PB);
}
