/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 04:23:37 by marvin            #+#    #+#             */
/*   Updated: 2024/01/29 04:23:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char *ft_strjoin(const char *s1, const char *s2)
{
    char    *p;
    int     i;
    int     j;

    i = 0;
    j = 0;
    p = (char *) malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
    if (!p)
        return (NULL);
    while (s1[i])
        p[j++] = s1[i++];
    i = 0;
    while (s2[i])
        p[j++] = s2[i++];
    p[j] = '\0';
    return (p);
}
