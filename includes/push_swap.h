/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:27:43 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/27 21:57:42 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h> // read, write
# include <stdlib.h> // malloc, free, exit

# include "libft.h"

typedef struct s_content
{
	int		value;
	size_t	target_i;
}	t_content;

void		contentfree(void *content);
t_content	*contentinit(int value);

typedef struct s_push_swap
{
	t_stack	*a;
	t_stack	*b;
}	t_push_swap;

int			is_number(char *str);
int			is_valid(char *str, long long atol, t_stack *a);

void		stack_to_array(t_stack *stack, int *array, size_t size);
int			parse_input(int argc, char *argv[], t_push_swap *ps);

# define PS_SA "sa"
# define PS_SB "sb"
# define PS_SS "ss"
# define PS_PA "pa"
# define PS_PB "pb"
# define PS_RA "ra"
# define PS_RB "rb"
# define PS_RR "rr"
# define PS_RRA "rra"
# define PS_RRB "rrb"
# define PS_RRR "rrr"

#endif
