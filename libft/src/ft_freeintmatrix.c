/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freeintmatrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:15:02 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/16 20:23:46 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

int	**ft_freeintmatrix(int ***matrix, size_t size)
{
	size_t	i;

	if (matrix == NULL || *matrix == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		free((*matrix)[i]);
		*matrix[i] = NULL;
		i++;
	}
	free(*matrix);
	*matrix = NULL;
	return (NULL);
}
