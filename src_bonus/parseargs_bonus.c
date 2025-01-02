/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseargs_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:00:01 by migugar2          #+#    #+#             */
/*   Updated: 2025/01/02 18:05:30 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	parse_normal_input(int argc, char *argv[], t_push_swap *ps)
{
	long long	tmp;
	int			i;
	int			*content_ptr;

	i = argc - 1;
	while (i > 0)
	{
		tmp = ft_atoll(argv[i]);
		if (!is_valid(argv[i], tmp, ps->a))
			return (-1);
		content_ptr = (int *)malloc(sizeof(int));
		if (content_ptr == NULL)
			return (-1);
		*content_ptr = (int)tmp;
		if (ft_stackpushnew(ps->a, (void *)content_ptr) == NULL)
			return (free(content_ptr), -1);
		i--;
	}
	return (1);
}

static int	parse_multi_input(char *text, t_push_swap *ps)
{
	char		**numbers;
	long long	tmp;
	size_t		i;
	int			*content_ptr;

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
		content_ptr = (int *)malloc(sizeof(int));
		if (content_ptr == NULL)
			return (-1);
		*content_ptr = (int)tmp;
		if (ft_stackpushnew(ps->a, (void *)content_ptr) == NULL)
			return (ft_freestrarr(&numbers), -1);
	}
	return (ft_freestrarr(&numbers), 1);
}

int	parse_input(int argc, char *argv[], t_push_swap *ps)
{
	ps->a = ft_stackinit();
	if (ps->a == NULL)
		return (-1);
	if (argc == 2)
	{
		if (parse_multi_input(argv[1], ps) == -1)
			return (ft_stackfree(&ps->a, free), -1);
		return (1);
	}
	if (parse_normal_input(argc, argv, ps) == -1)
		return (ft_stackfree(&ps->a, free), -1);
	return (1);
}
