/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:19:09 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/22 23:59:53 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	d = (char *)malloc(sizeof(*s) * (len + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (i < len)
	{
		d[i] = s[start + i];
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