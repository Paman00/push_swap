/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 01:01:54 by migugar2          #+#    #+#             */
/*   Updated: 2025/01/03 01:16:32 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	do_sa(t_push_swap *ps)
{
	ft_stackswaptop(ps->a);
}

void	do_sb(t_push_swap *ps)
{
	ft_stackswaptop(ps->b);
}

void	do_ss(t_push_swap *ps)
{
	ft_stackswaptop(ps->a);
	ft_stackswaptop(ps->b);
}
