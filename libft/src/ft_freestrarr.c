/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestrarr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:14:20 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/16 19:17:05 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	**ft_freestrarr(char ***arr)
{
	size_t	i;

	if (arr == NULL || *arr == NULL)
		return (NULL);
	i = 0;
	while ((*arr)[i] != NULL)
	{
		ft_freestr(&(*arr)[i]);
		i++;
	}
	free(*arr);
	*arr = NULL;
	return (NULL);
}
