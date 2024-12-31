/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestrarr_r.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:12:10 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/16 20:24:02 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	**ft_freestrarr_r(char ***arr, size_t i)
{
	if (arr == NULL || *arr == NULL)
		return (NULL);
	while (i > 0)
	{
		i--;
		ft_freestr(&(*arr)[i]);
	}
	free(*arr);
	*arr = NULL;
	return (NULL);
}
