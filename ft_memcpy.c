/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:38:15 by jcharfao          #+#    #+#             */
/*   Updated: 2024/01/31 06:45:26 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s == NULL && d == NULL)
		return (NULL);
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*int main()
{
    char dest[] = "mundo";
    const char src[] = "15";
    size_t len= 35345;
    ft_memcpy(dest, src, len);
    printf ("%s\n", dest);
    return 0;
}*/