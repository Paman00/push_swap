/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:50:11 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/10 19:51:58 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_ra(t_push_swap *ps)
{
	ft_stackrotate(ps->a);
	printer_instruction(PS_RA);
}

void	do_rb(t_push_swap *ps)
{
	ft_stackrotate(ps->b);
	printer_instruction(PS_RB);
}

void	do_rr(t_push_swap *ps)
{
	ft_stackrotate(ps->a);
	ft_stackrotate(ps->b);
	printer_instruction(PS_RR);
}
