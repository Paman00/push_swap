/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 01:01:37 by migugar2          #+#    #+#             */
/*   Updated: 2025/01/03 01:15:53 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	do_rra(t_push_swap *ps)
{
	ft_stackrotaterev(ps->a);
}

void	do_rrb(t_push_swap *ps)
{
	ft_stackrotaterev(ps->b);
}

void	do_rrr(t_push_swap *ps)
{
	ft_stackrotaterev(ps->a);
	ft_stackrotaterev(ps->b);
}
