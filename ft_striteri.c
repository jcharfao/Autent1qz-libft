/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:55:44 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/20 18:29:28 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return (0);
}
