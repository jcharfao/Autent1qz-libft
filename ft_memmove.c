/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:29:13 by jcharfao          #+#    #+#             */
/*   Updated: 2024/01/31 06:52:33 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	if (d < s)
		return (memcpy(d, s, len));
	if (!len || d == s)
		return (d);
	while (len--)
		d[len] = s[len];
	return (d);
}
/*int	main()
{
	char	dt[] = "hoo";
	char	sc[] = "hooasda";
	ft_memmove(dt, sc, 5);
	printf("%s\n", dt);
}
*/