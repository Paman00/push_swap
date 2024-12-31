/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:05:25 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/31 09:16:43 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_write.h"
#include <stddef.h>

int	ft_putptr_fd(int fd, void *ptr)
{
	unsigned long	hex;
	int				count;

	if (ptr == NULL)
		return (ft_putstr_fd(fd, "(nil)"));
	hex = (unsigned long)ptr;
	count = 0;
	count += ft_putstr_fd(fd, "0x");
	count += ft_putnbrhex_fd(fd, hex, 0);
	return (count);
}
