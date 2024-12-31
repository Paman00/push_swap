/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:02:25 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/31 09:16:25 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_write.h"

int	ft_putnbr_fd(int fd, int nbr)
{
	int		count;

	if (nbr == -2147483648)
		return (ft_putstr_fd(fd, "-2147483648"));
	count = 0;
	if (nbr < 0)
	{
		count += ft_putchar_fd(fd, '-');
		nbr = -nbr;
	}
	if (nbr > 9)
		count += ft_putnbr_fd(fd, nbr / 10);
	count += ft_putchar_fd(fd, (nbr % 10) + '0');
	return (count);
}
