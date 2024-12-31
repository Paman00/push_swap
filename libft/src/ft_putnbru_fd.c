/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:34:25 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/31 09:16:37 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_write.h"

int	ft_putnbru_fd(int fd, unsigned int nbr)
{
	int		count;

	count = 0;
	if (nbr > 9)
		count += ft_putnbru_fd(fd, nbr / 10);
	count += ft_putchar_fd(fd, (nbr % 10) + '0');
	return (count);
}
