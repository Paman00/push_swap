/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   content.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 00:44:08 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/10 22:36:44 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	contentfree(void *content)
{
	free(content);
}

t_content	*contentinit(int value)
{
	t_content	*content;

	content = (t_content *)malloc(sizeof(t_content));
	if (content == NULL)
		return (NULL);
	content->value = value;
	content->target_i = 0;
	return (content);
}
