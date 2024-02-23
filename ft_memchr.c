/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:04:01 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/22 19:18:13 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	p;
	size_t			i;

	str = (unsigned char *) s;
	p = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == p)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

/*int main()
{
	char s[] = "hloladasdadasd";
	printf("%s\n", ft_memchr(s, 'l', 30));
	return (0);
}*/