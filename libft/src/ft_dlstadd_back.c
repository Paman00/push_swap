/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:00:03 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/31 06:17:38 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"

void	ft_dlstadd_back(t_dlist **lst, t_dlist *node)
{
	t_dlist	*last;

	if (lst == NULL || node == NULL)
		return ;
	last = ft_dlstlast(*lst);
	if (last != NULL)
	{
		last->next = node;
		node->prev = last;
	}
	else
		*lst = node;
}
