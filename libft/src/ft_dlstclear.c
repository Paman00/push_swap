/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:44:12 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/24 20:47:05 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"

void	ft_dlstclear(t_dlist **lst, void (*del)(void *))
{
	t_dlist	*current;
	t_dlist	*next;

	if (lst == NULL)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_dlstdelone(&current, del);
		current = next;
	}
	*lst = NULL;
}
