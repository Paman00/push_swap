/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:21:44 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/31 09:17:19 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr_fd(int fd, char *str)
{
	int		count;

	if (str == NULL)
		return (ft_putstr_fd(fd, "(null)"));
	count = 0;
	while (str[count])
		count++;
	write(fd, str, count);
	return (count);
}
