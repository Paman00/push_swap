/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 21:01:14 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/24 22:26:40 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"

t_dlist	*ft_dlstmap(t_dlist *lst, void *(*f)(void *), void (*del)(void *))
{
	t_dlist	*new_lst;
	t_dlist	*node;
	void	*content;

	if (f == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_dlstnew(content);
		if (node == NULL)
			return (ft_dlstclear(&new_lst, del), NULL);
		ft_dlstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}
