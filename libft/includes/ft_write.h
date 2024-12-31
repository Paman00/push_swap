/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:43:41 by migugar2          #+#    #+#             */
/*   Updated: 2024/12/31 09:14:29 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_WRITE_H
# define FT_WRITE_H

# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar_fd(int fd, char c);
int	ft_putnbrhex_fd(int fd, unsigned long nbr, int is_cap);
int	ft_putnbru_fd(int fd, unsigned int nbr);
int	ft_putnbr_fd(int fd, int nbr);
int	ft_putptr_fd(int fd, void *ptr);
int	ft_putstr_fd(int fd, char *str);
int	ft_putendl_fd(int fd, char *str);

#endif
