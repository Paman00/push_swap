/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:32:06 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/26 01:35:53 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// TODO: Must check if the input is valid: only numbers int and no repeated
int	is_valid(char *str, t_stack *a)
{
	(void)a;
	(void)str;
	return (1);
}

// TODO: When argv[1] is multiple inputs must manage it
/*
int	parse_multi_input(char *argv1, t_push_swap *ps)
{
	char	**numbers;

	numbers = ft_split(argv1, ' ');
	if (numbers == NULL)
		return (-1);
}
*/

void	stack_to_array(t_stack *stack, int *array, size_t size)
{
	t_dlist	*node;
	size_t	i;

	node = stack->top;
	i = 0;
	while (i < size && node != NULL)
	{
		array[i] = ((t_content *)node->content)->value;
		node = node->next;
		i++;
	}
}

int	add_indexes(t_stack *a, size_t size)
{
	int			*array;
	t_dlist		*node;
	t_content	*content;

	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
		return (-1);
	stack_to_array(a, array, size);
	// ft_quicksort(array, size); // TODO
	node = a->top;
	while (node != NULL)
	{
		content = (t_content *)node->content;
		content->target_i = ft_indexof(array, size, content->value);
		if (content->target_i == size)
			return (free(array), -1); // Error while parsing data i think
		node = node->next;
	}
	free(array);
	return (1);
}

int	parse_input(int argc, char *argv[], t_push_swap *ps)
{
	int			tmp;
	int			i;
	t_content	*content;

	ps->a = ft_stackinit();
	if (ps->a == NULL)
		return (-1);
	i = argc - 1;
	while (i > 0) // TODO: i > 1 for manage argv[1] for multiple inputs
	{
		if (!is_valid(argv[i], ps->a))
			return (ft_stackfree(&ps->a, contentfree), -1);
		tmp = ft_atoi(argv[i]); // TODO: Check if atoi is valid
		content = contentinit(tmp);
		if (content == NULL)
			return (ft_stackfree(&ps->a, contentfree), -1);
		if (ft_stackpushnew(ps->a, content) == NULL)
			return (ft_stackfree(&ps->a, contentfree), -1);
		i--;
	}
	if (add_indexes(ps->a, ps->a->size) == -1)
		return (ft_stackfree(&ps->a, contentfree), -1);
	return (1);
}
