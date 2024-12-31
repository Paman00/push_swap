/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:28:37 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/26 21:34:09 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	choose_pivot(int *array, size_t low, size_t high)
{
	size_t	mid;

	mid = (low + high) / 2;
	if (array[low] <= array[high] && array[low] >= array[mid])
		return (low);
	if (array[high] <= array[low] && array[high] >= array[mid])
		return (high);
	return (mid);
}

static size_t	partition(int *array, size_t low, size_t high, size_t pivot_i)
{
	int		pivot_value;
	size_t	i;
	size_t	j;
	int		tmp;

	pivot_value = array[pivot_i];
	i = low;
	j = high;
	while (i < j)
	{
		while (array[i] < pivot_value)
			i++;
		while (array[j] > pivot_value)
			j--;
		if (i < j)
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}
	return (i);
}

int	*ft_quicksort(int *array, size_t low, size_t high)
{
	size_t	pivot_index;
	size_t	size;

	if (low < high)
	{
		size = high - low + 1;
		if (size <= 3)
			ft_insertionsort(array + low, size);
		else
		{
			pivot_index = choose_pivot(array, low, high);
			pivot_index = partition(array, low, high, pivot_index);
			if (pivot_index > 0)
				ft_quicksort(array, low, pivot_index - 1);
			ft_quicksort(array, pivot_index + 1, high);
		}
	}
	return (array);
}
