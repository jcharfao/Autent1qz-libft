/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 06:34:51 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/16 09:54:00 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(dst);
	i = 0;
	if (dstsize <= src_len)
		return (ft_strlen(src) + dstsize);
	while (src[i] && (src_len + i) < (dstsize - 1))
	{
		dst[src_len + i] = src[i];
		i++;
	}
	dst[src_len + i] = 0;
	return (ft_strlen(src) + src_len);
}

/*int	main()
 {
	char dest[] = "hola";
	char sourc[] = "mundo";
	ft_strlcat(dest, sourc, 20);
	printf("%s\n", dest);
 }*/