/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 06:54:43 by jcharfao          #+#    #+#             */
/*   Updated: 2024/01/31 07:02:28 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*sr1;
	char	*sr2;

	if (n == 0)
		return (0);
	i = 0;
	sr1 = (char *)s1;
	sr2 = (char *)s2;
	while (n--)
	{
		if (sr1[i] != sr2[i])
			return ((unsigned char)sr1[i] - (unsigned char)sr2[i]);
		i++;
	}
	return (0);
}
