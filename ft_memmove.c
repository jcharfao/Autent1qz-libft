/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:29:13 by jcharfao          #+#    #+#             */
/*   Updated: 2024/01/21 16:57:13 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL && dst == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d >= s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		memcpy(d, s, len);
	return (dst);
}
/*int	main()
{
	char	dt[] = "hoo";
	char	sc[] = "hoo";
	ft_memmove(dt, sc, 56);
	printf("%s\n", dt);
}*/
