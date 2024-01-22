/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:13:56 by jcharfao          #+#    #+#             */
/*   Updated: 2024/01/22 18:09:03 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;
	char	*d;
	char	*s;

	j = 0;
	i = 0;
	d = (char *) dst;
	s = (char *) src;
	while (d[i] != '\0')
		i++;
	while (s[j] && i < len)
	{
		d[i] = s[j];
		j++;
		i++;
	}
	d[i] = '\0';
	return (len - i);
}
/*int	main()
 {
	char dest[] = "hola";
	char sourc[] = "mundfks7yjfsfo";
	ft_strlcat(dest, sourc, 20);
	printf("%s\n", dest);
 }*/