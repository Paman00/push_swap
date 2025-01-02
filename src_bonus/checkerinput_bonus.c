/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerinput_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 23:48:15 by migugar2          #+#    #+#             */
/*   Updated: 2025/01/03 00:46:48 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	readinput(void)
{
	char	*line;
	ssize_t	bytes_read;

	while (1)
	{
		bytes_read = get_next_line(0, &line);
		if (bytes_read == -1)
			return (-1);
		if (bytes_read == 0)
			break ;
		// check if is a valid move and do it, print error if not, return -1 and not check if the algorithm is correct in pattern function
		ft_putendl_fd(1, line);
		ft_freestr(&line);
	}
	ft_freestr(&line);
	return (1);
}
