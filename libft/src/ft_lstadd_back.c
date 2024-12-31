/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:37:35 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/24 22:06:04 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lstadd_back(t_list **lst, t_list *node)
{
	t_list	*last;

	if (lst == NULL || node == NULL)
		return ;
	last = ft_lstlast(*lst);
	if (last != NULL)
		last->next = node;
	else
		*lst = node;
}
