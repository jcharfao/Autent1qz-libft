/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:19:09 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/18 20:26:59 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > strlen(s))
		len = 0;
	if (len > strlen(s))
		len = strlen(s);
	d = (char *)malloc(sizeof(*s) * (len + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		d[i] = s[start];
		start++;
		i++;
	}
	d[i] = '\0';
	return (d);
}
/*int main() 
{
    const char *s = "¡Hola, mundo!";
    unsigned int start = 5;
    size_t len = 50;

    char *subcadena = ft_substr(s, start, len);
    printf("%s\n", subcadena);
    free(subcadena);
    return 0;
}
*/