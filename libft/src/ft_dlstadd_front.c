/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:02:18 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/31 06:20:24 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"

void	ft_dlstadd_front(t_dlist **lst, t_dlist *node)
{
	if (lst && node)
	{
		node->next = *lst;
		if (*lst)
			(*lst)->prev = node;
		*lst = node;
	}
}
