/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 08:30:51 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/16 09:11:28 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t	fti_strlen(const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}
char	*fti_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (char) c)
            return ((char *)&s[i]);
        i++;
    }
    if (s[i] == (char) c)
        return ((char *)&s[i]);
    return (0);
}
char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	l;
	char *res;
	
	i = 0;
	l = 0;
	if (s1 == NULL)
		return (NULL);
	while (s1[i], ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while ((s1[j - 1] > 0), ft_strchr(set, s1[j - 1]))
		j--;
	res = malloc(sizeof(char) * (j - i + 1));
	if (!res)
		return (NULL);
	while (i < j)
	{
		res[l] = s1[i];
		i++;
		l++;
	}
	res[l] = '\0';
	return (res);
}
/*
int main()
{
    const char *original = "hhhhhhhh   ¡Hola, mundo!   hhhhhhhhh";
    const char *set = "h";

    char *trimmed = ft_strtrim(original, set);

    if (trimmed)
	{
		
		printf("%s\n", trimmed);

        free(trimmed);
	}
	else
	{
	printf("Error al llamar a ft_strtrim\n");
	}
	return 0;
}*/