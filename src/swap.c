/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:33:24 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/10 19:39:05 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_sa(t_push_swap *ps)
{
	ft_stackswaptop(ps->a);
	printer_instruction(PS_SA);
}

void	do_sb(t_push_swap *ps)
{
	ft_stackswaptop(ps->b);
	printer_instruction(PS_SB);
}

void	do_ss(t_push_swap *ps)
{
	ft_stackswaptop(ps->a);
	ft_stackswaptop(ps->b);
	printer_instruction(PS_SS);
}
