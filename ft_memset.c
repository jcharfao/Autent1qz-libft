/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:40:35 by jcharfao          #+#    #+#             */
/*   Updated: 2024/01/24 17:35:02 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s;

	s = (char *)b;
	i = 0;
	while (i < len && s[i])
	{
		s[i] = c;
		i++;
	}
	return (s);
}
/*int main()
{
    char dest[] = "hpñadsyhdnahydasda";
    ft_memset(dest, 'a', 6);
    printf("%s\n", dest);
    return 0;
}*/