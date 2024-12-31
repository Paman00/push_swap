/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:33:15 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/24 22:03:46 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"

void	ft_dlstdelone(t_dlist **node, void (*del)(void *))
{
	if (node != NULL && *node != NULL)
	{
		if (del != NULL)
			del((*node)->content);
		free(*node);
		*node = NULL;
	}
}
