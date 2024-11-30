/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:27:43 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/30 19:16:40 by migugar2         ###   ########.fr       */
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
	int		target_i;
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

# define PS_SA 1
# define PS_SB 2
# define PS_SS 3

# define PS_PA 4
# define PS_PB 5

# define PS_RA 6
# define PS_RB 7
# define PS_RR 8

# define PS_RRA 9
# define PS_RRB 10
# define PS_RRR 11

char		*get_instruction(int instruction);
void		printer_instruction(int instruction);
void		end_printer_instruction(void);

void		do_swap(t_push_swap *ps, char key);
void		do_push(t_push_swap *ps, char key);
void		do_rotate(t_push_swap *ps, char key);
void		do_rev_rotate(t_push_swap *ps, char key);

char		get_oposite(char key);
int			is_sorted(t_stack *stack);

void		push_shortest(t_push_swap *ps, t_stack *stack, char keyfrom);
void		sort_3(t_push_swap *ps, t_stack *stack, char key);
void		sort_5_or_less(t_push_swap *ps, t_stack *stack, char key);

void		algorithm(t_push_swap *ps);

#endif
