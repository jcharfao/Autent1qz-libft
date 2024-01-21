/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:50:34 by jcharfao          #+#    #+#             */
/*   Updated: 2024/01/21 13:58:07 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"
#include <stddef.h>
#include <stdio.h>*/
void	*ft_bzero(void *s, size_t n)
{
	size_t i;
    char *str;
	
    str = (char *)s;
    i = 0;
    while (i < n && str[i])
    {
        str[i] = 0;
        i++;
    }
    return s;
}
/*int main()
{
    char dest[] = "h";
    ft_bzero(dest, 3);
    printf("%s\n", dest);
    return 0;
}*/