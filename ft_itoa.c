/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 02:11:18 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/20 12:56:29 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int int_len(long nbr)
{
	int cont;

	cont = 0;
	if (nbr < 0)
	{
		cont++;
		nbr *= -1;
	}
	if (nbr == 0)
		cont++;
	while (nbr != 0)
	{
		nbr /= 10;
		cont++;
	}
	return (cont);
}
static char	*pre_conv(int len)
{
	char *tmp;;

	tmp = malloc((len +1) * sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}
char	*ft_itoa(int n)
{
	long	ñ;
	int		len;
	char *result;
	int i;

	ñ = n;
	len = int_len(ñ);
	result = pre_conv(len);
	if (!result)
		return (NULL);
	if (ñ < 0)
		ñ = -ñ;
	i = len - 1;
	while (ñ != 0)
	{
		result[i] = ((ñ % 10) + 48);
		ñ = ñ / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[len] = 0;
	return (result);
}
