/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:13:19 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/30 13:13:07 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	t_dlist		*node;
	t_content	*content;

	node = stack->top;
	while (node != NULL)
	{
		content = (t_content *)node->content;
		printf("%d: %d\n", content->target_i, content->value);
		node = node->next;
	}
}

int	main(int argc, char *argv[])
{
	t_push_swap	push_swap;

	if (argc < 2)
		return (1);
	if (parse_input(argc, argv, &push_swap) == -1)
		return (ft_putendl_fd(2, "Error"), 1);
	push_swap.b = ft_stackinit();
	if (push_swap.b == NULL)
		return (ft_stackfree(&push_swap.a, contentfree),
			ft_putendl_fd(2, "Error"), 1);
	print_stack(push_swap.a);
	algorithm(&push_swap);
	print_stack(push_swap.a);
	ft_stackfree(&push_swap.a, contentfree);
	ft_stackfree(&push_swap.b, contentfree);
}
