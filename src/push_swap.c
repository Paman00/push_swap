/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:13:19 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/27 20:18:56 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_push_swap	push_swap;

	if (argc < 2)
		return (1);
	if (parse_input(argc, argv, &push_swap) == -1)
		return (ft_putendl_fd(STDERR_FILENO, "Error"), 1);

	t_dlist	*node;
	node = push_swap.a->top;
	while (node != NULL)
	{
		printf("%zu: %d\n", ((t_content *)node->content)->target_i, ((t_content *)node->content)->value);
		node = node->next;
	}
	ft_stackfree(&push_swap.a, contentfree);
}
