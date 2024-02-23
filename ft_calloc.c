/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:53:10 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/23 23:15:55 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (str == 0)
		return (str);
	ft_bzero(str, size * count);
	return (str);
}

int	main()
{
	size_t count = 6;
	size_t size = sizeof(int);
	char *str = ft_calloc(count, size);
	printf("%s\n", str);
	free(str);
}