/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:40:35 by jcharfao          #+#    #+#             */
/*   Updated: 2024/01/21 16:45:08 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"
#include <stdio.h>
#include <stddef.h>*/

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
	s[i] = 0;
	return (s);
}
/*int main()
{
    char dest[] = "hpñadsyhdnahydasda";
    ft_memset(dest, 'a', 3);
    printf("%s\n", dest);
    return 0;
}*/