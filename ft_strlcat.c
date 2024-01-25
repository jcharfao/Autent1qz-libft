/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:13:56 by jcharfao          #+#    #+#             */
/*   Updated: 2024/01/24 17:41:53 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] && i < len - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*int	main()
 {
	char dest[] = "hola";
	char sourc[] = "mundo";
	ft_strlcat(dest, sourc, 20);
	printf("%s\n", dest);
 }*/