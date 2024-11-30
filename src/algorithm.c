/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:37:56 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/30 19:14:42 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm(t_push_swap *ps)
{
	if (is_sorted(ps->a))
		return ;
	if (ps->a->size <= 5)
		sort_5_or_less(ps, ps->a, 'a');
	end_printer_instruction();
}
