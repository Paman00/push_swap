/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:31:11 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/16 12:31:31 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_free(void **ptr)
{
	if (ptr == NULL || *ptr == NULL)
		return (NULL);
	free(*ptr);
	*ptr = NULL;
	return (NULL);
}
