/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 01:02:03 by migugar2          #+#    #+#             */
/*   Updated: 2025/01/03 01:15:34 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	do_pa(t_push_swap *ps)
{
	ft_stackmovetop(ps->b, ps->a);
}

void	do_pb(t_push_swap *ps)
{
	ft_stackmovetop(ps->a, ps->b);
}
