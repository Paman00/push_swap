/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestrmatrix_r.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:38:36 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/16 21:27:36 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	***ft_freestrmatrix_r(char ****matrix, size_t i)
{
	if (matrix == NULL || *matrix == NULL)
		return (NULL);
	while (i > 0)
	{
		i--;
		ft_freestrarr(&(*matrix)[i]);
	}
	free(*matrix);
	*matrix = NULL;
	return (NULL);
}
