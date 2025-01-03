/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 01:01:34 by migugar2          #+#    #+#             */
/*   Updated: 2025/01/03 01:16:15 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	do_ra(t_push_swap *ps)
{
	ft_stackrotate(ps->a);
}

void	do_rb(t_push_swap *ps)
{
	ft_stackrotate(ps->b);
}

void	do_rr(t_push_swap *ps)
{
	ft_stackrotate(ps->a);
	ft_stackrotate(ps->b);
}
