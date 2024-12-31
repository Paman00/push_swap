/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:46:48 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/24 22:06:52 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lstdelone(t_list **node, void (*del)(void *))
{
	if (node != NULL && *node != NULL)
	{
		if (del != NULL)
			del((*node)->content);
		free(*node);
		*node = NULL;
	}
}
