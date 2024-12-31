/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestrmatrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:34:20 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/16 20:24:12 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	***ft_freestrmatrix(char ****matrix)
{
	size_t	i;

	if (matrix == NULL || *matrix == NULL)
		return (NULL);
	i = 0;
	while ((*matrix)[i] != NULL)
	{
		ft_freestrarr(&(*matrix)[i]);
		i++;
	}
	free(*matrix);
	*matrix = NULL;
	return (NULL);
}
