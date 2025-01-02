/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:46:25 by migugar2          #+#    #+#             */
/*   Updated: 2025/01/02 18:03:45 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	print_stack(t_stack *stack)
{
	t_dlist	*node;

	node = stack->top;
	while (node != NULL)
	{
		ft_putnbr_fd(1, *((int *)node->content));
		ft_putchar_fd(1, '\n');
		node = node->next;
	}
}

int	main(int argc, char **argv)
{
	t_push_swap	push_swap;

	if (argc < 2)
		return (1);
	if (parse_input(argc, argv, &push_swap) == -1)
		return (ft_putendl_fd(2, "Error"), 1);
	push_swap.b = ft_stackinit();
	if (push_swap.b == NULL)
		return (ft_stackfree(&push_swap.a, free),
			ft_putendl_fd(2, "Error"), 1);
	print_stack(push_swap.a);
	// checker(&push_swap); // checker reading from gnl(stdin)
	ft_stackfree(&push_swap.a, free);
	ft_stackfree(&push_swap.b, free);
}
