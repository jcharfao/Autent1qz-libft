/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 02:11:18 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/22 16:19:51 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ilen(long nbr)
{
	int	cont;

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

static char	*preconvers(int len)
{
	char	*tmp;

	tmp = malloc((len +1) * sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}

char	*ft_itoa(int n)
{
	long	o;
	int		len;
	char	*result;
	int		i;

	o = n;
	len = ilen(o);
	result = preconvers(len);
	if (!result)
		return (NULL);
	if (o < 0)
		o *= -1;
	i = len - 1;
	while (o != 0)
	{
		result[i] = ((o % 10) + 48);
		o = o / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[len] = 0;
	return (result);
}

/*int main()
{
	int n = 2147483648;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/