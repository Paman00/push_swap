/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:41:51 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/31 09:16:31 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_write.h"

static char	get_char_hex(int i, int is_cap)
{
	if (is_cap)
		return ("0123456789ABCDEF"[i]);
	return ("0123456789abcdef"[i]);
}

int	ft_putnbrhex_fd(int fd, unsigned long nbr, int is_cap)
{
	int		count;

	count = 0;
	if (nbr > 15)
		count += ft_putnbrhex_fd(fd, nbr / 16, is_cap);
	count += ft_putchar_fd(fd, get_char_hex(nbr % 16, is_cap));
	return (count);
}
