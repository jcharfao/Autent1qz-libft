/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:57:36 by jcharfao          #+#    #+#             */
/*   Updated: 2024/01/22 18:06:28 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && src[j] && i < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	return (strlen(dst));
}
/*
int	main()
{
	char dst[] = "hodgsgsgsgo";
	char src[] = "noogaerherearhereh";
	
	printf ("%zu\n", ft_strlcpy(dst, src, 67));
}*/
