/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 02:54:43 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/18 03:02:39 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	li;

	li = n;
	if (li < 0)
	{
		ft_putchar_fd('-', fd);
		li = li * -1;
	}
	if (li >= 10)
	{
		ft_putnbr_fd(li / 10, fd);
		ft_putnbr_fd(li % 10, fd);
	}
	else
	{
		ft_putchar_fd(li + '0', fd);
	}
}
