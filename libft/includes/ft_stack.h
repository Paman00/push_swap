/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:29:29 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/25 01:46:19 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# include <stddef.h>
# include <stdlib.h>
# include "ft_dlst.h"

typedef struct s_stack
{
	t_dlist	*top;
	t_dlist	*bottom;
	size_t	size;
}	t_stack;

t_stack	*ft_stackinit(void);

// Add the node at the top (front/beginning in list) of the stack
size_t	ft_stackpush(t_stack *stack, t_dlist *node);
// Create a new node at the top (front/beginning in list) of the stack
t_dlist	*ft_stackpushnew(t_stack *stack, void *content);

// Remove the node at the top (front/beginning in list) of the stack
t_dlist	*ft_stackpop(t_stack *stack);
// Remove the node at the top (front/beginning in list) of the stack and free it
size_t	ft_stackpopfree(t_stack *stack, void (*del)(void *));

void	ft_stackswaptop(t_stack *stack);
void	ft_stackrotate(t_stack *stack);
void	ft_stackrotaterev(t_stack *stack);

size_t	ft_stackmovetop(t_stack *src, t_stack *dest);

void	ft_stackclear(t_stack *stack, void (*del)(void *));
t_stack	*ft_stackfree(t_stack **stack, void (*del)(void *));

#endif
