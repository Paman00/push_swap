/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertionsort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:20:12 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/26 18:20:20 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_insertionsort(int *array, size_t size)
{
	size_t	i;
	size_t	j;
	int		tmp;

	i = 1;
	while (i <= size - 1)
	{
		j = i;
		tmp = array[j];
		while (j > 0 && array[j - 1] > tmp)
		{
			array[j] = array[j - 1];
			j--;
		}
		array[j] = tmp;
		i++;
	}
	return (array);
}
