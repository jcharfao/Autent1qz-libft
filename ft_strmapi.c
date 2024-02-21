/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 01:39:28 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/20 16:34:58 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*rep;
	size_t	i;

	if (!s || !f)
		return (NULL);
	rep = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!rep)
		return (NULL);
	i = 0;
	while (s[i])
	{
		rep[i] = f(i, s[i]);
		i++;
	}
	rep[i] = '\0';
	return (rep);
}
