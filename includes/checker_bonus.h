/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:46:47 by migugar2          #+#    #+#             */
/*   Updated: 2025/01/02 18:07:36 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# include "libft.h"

// content from t_dlist must be an (int *) created with malloc
typedef struct s_push_swap
{
	t_stack	*a;
	t_stack	*b;
}	t_push_swap;

int			is_number(char *str);
int			is_valid(char *str, long long atol, t_stack *a);

int			parse_input(int argc, char *argv[], t_push_swap *ps);

#endif
