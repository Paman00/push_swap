/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackmovetop.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:15:38 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/25 01:31:00 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

size_t	ft_stackmovetop(t_stack *src, t_stack *dest)
{
	t_dlist	*node;

	if (dest == NULL)
		return (0);
	if (src == NULL || src->size == 0)
		return (dest->size);
	node = ft_stackpop(src);
	if (node == NULL)
		return (dest->size);
	return (ft_stackpush(dest, node));
}
