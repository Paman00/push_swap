/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:32:06 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/27 21:58:17 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

static int	add_indexes(t_stack *a, size_t size)
{
	int			*array;
	t_dlist		*node;
	t_content	*content;

	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
		return (-1);
	stack_to_array(a, array, size);
	array = ft_tosorted(array, size);
	node = a->top;
	while (node != NULL)
	{
		content = (t_content *)node->content;
		content->target_i = ft_indexof(array, size, content->value);
		if (content->target_i == size)
			return (free(array), -1);
		node = node->next;
	}
	free(array);
	return (1);
}

static int	parse_normal_input(int argc, char *argv[], t_push_swap *ps)
{
	long long	tmp;
	int			i;
	t_content	*content;

	i = argc - 1;
	while (i > 0)
	{
		tmp = ft_atoll(argv[i]);
		if (!is_valid(argv[i], tmp, ps->a))
			return (ft_stackfree(&ps->a, contentfree), -1);
		content = contentinit((int)tmp);
		if (content == NULL)
			return (ft_stackfree(&ps->a, contentfree), -1);
		if (ft_stackpushnew(ps->a, content) == NULL)
			return (ft_stackfree(&ps->a, contentfree), -1);
		i--;
	}
	return (1);
}

static int	parse_multi_input(char *text, t_push_swap *ps)
{
	char		**numbers;
	long long	tmp;
	size_t		i;
	t_content	*content;

	numbers = ft_split(text, ' ');
	if (numbers == NULL)
		return (-1);
	i = 0;
	while (numbers[i] != NULL)
		i++;
	while (i != 0)
	{
		i--;
		tmp = ft_atoll(numbers[i]);
		if (!is_valid(numbers[i], tmp, ps->a))
			return (ft_freestrarr(&numbers), -1);
		content = contentinit((int)tmp);
		if (content == NULL)
			return (ft_freestrarr(&numbers), -1);
		if (ft_stackpushnew(ps->a, content) == NULL)
			return (ft_freestrarr(&numbers), -1);
	}
	ft_freestrarr(&numbers);
	return (1);
}

int	parse_input(int argc, char *argv[], t_push_swap *ps)
{
	ps->a = ft_stackinit();
	if (ps->a == NULL)
		return (-1);
	if (argc == 2)
	{
		if (parse_multi_input(argv[1], ps) == -1)
			return (ft_stackfree(&ps->a, contentfree), -1);
	}
	else
	{
		if (parse_normal_input(argc, argv, ps) == -1)
			return (ft_stackfree(&ps->a, contentfree), -1);
	}
	if (add_indexes(ps->a, ps->a->size) == -1)
		return (ft_stackfree(&ps->a, contentfree), -1);
	return (1);
}
