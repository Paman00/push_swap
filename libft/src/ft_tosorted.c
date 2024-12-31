/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tosort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:20:57 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/26 18:22:22 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_tosorted(int *array, size_t size)
{
	if (size <= 10)
		return (ft_insertionsort(array, size));
	return (ft_quicksort(array, 0, size - 1));
}
