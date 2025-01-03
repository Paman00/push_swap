/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:46:47 by migugar2          #+#    #+#             */
/*   Updated: 2025/01/03 02:06:01 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# include "libft.h"

typedef struct s_push_swap
{
	t_stack	*a;
	t_stack	*b;
}	t_push_swap;

int			is_number(char *str);
int			is_valid(char *str, long long atol, t_stack *a);

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

void		do_sa(t_push_swap *ps);
void		do_sb(t_push_swap *ps);
void		do_ss(t_push_swap *ps);

void		do_pa(t_push_swap *ps);
void		do_pb(t_push_swap *ps);

void		do_ra(t_push_swap *ps);
void		do_rb(t_push_swap *ps);
void		do_rr(t_push_swap *ps);

void		do_rra(t_push_swap *ps);
void		do_rrb(t_push_swap *ps);
void		do_rrr(t_push_swap *ps);

int			is_sorted(t_stack *stack);
int			do_move(t_push_swap *ps, char *line);
int			check_stdin(t_push_swap *ps);
int			checker(t_push_swap *ps);

#endif
