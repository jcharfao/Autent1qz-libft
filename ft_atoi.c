/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 09:13:27 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/22 15:22:33 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ispace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'\
	|| c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		resultado;

	sign = 1;
	resultado = 0;
	i = 0;
	while (ft_ispace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = (str[i] - '0') + (resultado * 10);
		i++;
	}
	return (resultado * sign);
}
