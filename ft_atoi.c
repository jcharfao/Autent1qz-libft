/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 09:13:27 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/16 09:14:43 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
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
/*
int main()
{
	char mistr[] = "     -++42";
	printf("%d\n", ft_atoi(mistr));
}*/
	/*
	if (str[i] == '+' && str[i + 1] == '-' || \
	str[i] == '-' && str[i + 1] == '+' || \
	str[i] == '+' && str[i + 1] == '+' || \
	str[i] == '-' && str[i + 1] == '-')
	{
		i++;
	}*/
	/*if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] = '+')
		i++;	
	if (str[i] >= '0' && str[i] <= '9' && str[i])
	{
			
	}
		*/