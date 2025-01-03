/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:46:25 by migugar2          #+#    #+#             */
/*   Updated: 2025/01/03 02:05:48 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	main(int argc, char **argv)
{
	t_push_swap	push_swap;
	int			status;

	if (argc < 2)
		return (1);
	if (parse_input(argc, argv, &push_swap) == -1)
		return (ft_putendl_fd(2, "Error"), 1);
	push_swap.b = ft_stackinit();
	if (push_swap.b == NULL)
		return (ft_stackfree(&push_swap.a, free),
			ft_putendl_fd(2, "Error"), 1);
	status = checker(&push_swap);
	ft_stackfree(&push_swap.a, free);
	ft_stackfree(&push_swap.b, free);
	if (status == -1)
		return (ft_putendl_fd(2, "Error"), 1);
}
