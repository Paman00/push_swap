/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:34:43 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/30 15:42:32 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*get_instruction(int instruction)
{
	if (instruction == PS_SA)
		return ("sa");
	else if (instruction == PS_SB)
		return ("sb");
	else if (instruction == PS_SS)
		return ("ss");
	else if (instruction == PS_PA)
		return ("pa");
	else if (instruction == PS_PB)
		return ("pb");
	else if (instruction == PS_RA)
		return ("ra");
	else if (instruction == PS_RB)
		return ("rb");
	else if (instruction == PS_RR)
		return ("rr");
	else if (instruction == PS_RRA)
		return ("rra");
	else if (instruction == PS_RRB)
		return ("rrb");
	else if (instruction == PS_RRR)
		return ("rrr");
	return (NULL);
}

void	printer_instruction(int instruction)
{
	static int	last_instruction = 0;

	if (last_instruction == 0)
		last_instruction = instruction;
	else
	{
		if ((last_instruction == PS_SA && instruction == PS_SB)
			|| (last_instruction == PS_SB && instruction == PS_SA))
			ft_putendl_fd(1, "ss");
		else if ((last_instruction == PS_RA && instruction == PS_RB)
			|| (last_instruction == PS_RB && instruction == PS_RA))
			ft_putendl_fd(1, "rr");
		else if ((last_instruction == PS_RRA && instruction == PS_RRB)
			|| (last_instruction == PS_RRB && instruction == PS_RRA))
			ft_putendl_fd(1, "rrr");
		else
		{
			if (last_instruction != 0)
				ft_putendl_fd(1, get_instruction(last_instruction));
			last_instruction = instruction;
			return ;
		}
		last_instruction = 0;
	}
}

void	end_printer_instruction(void)
{
	printer_instruction(0);
}
