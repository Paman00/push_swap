/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:42:45 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/27 19:37:18 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		r;
	int		sign;
	size_t	i;

	if (nptr == NULL || *nptr == '\0')
		return (0);
	r = 0;
	sign = 1;
	i = 0;
	while (nptr[i] && ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		r = (r * 10) + (nptr[i] - '0');
		i++;
	}
	r = r * sign;
	return (r);
}