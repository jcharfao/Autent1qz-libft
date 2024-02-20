/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:53:10 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/18 15:22:51 by jcharfao         ###   ########.fr       */
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
/*int  main()
{
  char str[] = "hello world";
  ft_bzero(str, 11);
  printf("%s\n", str);
}*/