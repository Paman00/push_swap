/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargs_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:50:08 by migugar2          #+#    #+#             */
/*   Updated: 2025/01/02 17:52:41 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	is_number(char *str)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (str == NULL || str[i] == '\0')
		return (0);
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	len = 0;
	while (str[i] && ft_isdigit(str[i]))
	{
		i++;
		len++;
	}
	if (len == 0 || len > 10)
		return (0);
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] != '\0')
		return (0);
	return (1);
}

int	is_valid(char *str, long long number, t_stack *a)
{
	t_dlist	*node;

	if (str == NULL)
		return (0);
	if (!is_number(str))
		return (0);
	if (number < -2147483648 || number > 2147483647)
		return (0);
	node = a->top;
	while (node != NULL)
	{
		if (*((int *)node->content) == number)
			return (0);
		node = node->next;
	}
	return (1);
}
