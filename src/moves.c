/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:24:36 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/30 10:37:01 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move2(t_push_swap *ps, char *movement)
{
	if (ft_strncmp(movement, PS_RA, ft_strlen(PS_RA)) == 0)
		ft_stackrotate(ps->a);
	else if (ft_strncmp(movement, PS_RB, ft_strlen(PS_RB)) == 0)
		ft_stackrotate(ps->b);
	else if (ft_strncmp(movement, PS_RR, ft_strlen(PS_RR)) == 0)
	{
		ft_stackrotate(ps->a);
		ft_stackrotate(ps->b);
	}
	else if (ft_strncmp(movement, PS_RRA, ft_strlen(PS_RRA)) == 0)
		ft_stackrotaterev(ps->a);
	else if (ft_strncmp(movement, PS_RRB, ft_strlen(PS_RRB)) == 0)
		ft_stackrotaterev(ps->b);
	else if (ft_strncmp(movement, PS_RRR, ft_strlen(PS_RRR)) == 0)
	{
		ft_stackrotaterev(ps->a);
		ft_stackrotaterev(ps->b);
	}
	else
		return ;
	ft_putendl_fd(1, movement);
}

void	move(t_push_swap *ps, char *movement)
{
	if (ft_strncmp(movement, PS_SA, ft_strlen(PS_SA)) == 0)
		ft_stackswaptop(ps->a);
	else if (ft_strncmp(movement, PS_SB, ft_strlen(PS_SB)) == 0)
		ft_stackswaptop(ps->b);
	else if (ft_strncmp(movement, PS_SS, ft_strlen(PS_SS)) == 0)
	{
		ft_stackswaptop(ps->a);
		ft_stackswaptop(ps->b);
	}
	else if (ft_strncmp(movement, PS_PA, ft_strlen(PS_PA)) == 0)
		ft_stackmovetop(ps->b, ps->a);
	else if (ft_strncmp(movement, PS_PB, ft_strlen(PS_PB)) == 0)
		ft_stackmovetop(ps->a, ps->b);
	else
		return ((void)move2(ps, movement));
	ft_putendl_fd(1, movement);
}
