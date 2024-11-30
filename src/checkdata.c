/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkdata.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:30:45 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/30 10:23:25 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		if (((t_content *)node->content)->value == number)
			return (0);
		node = node->next;
	}
	return (1);
}
