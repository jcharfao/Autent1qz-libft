/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 08:30:51 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/23 00:05:02 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	l;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (i < j && ft_strchr(set, s1[i]))
		i++;
	while (j > 0 && ft_strchr(set, s1[j - 1]))
		j--;
	if (i >= j)
		return (ft_strdup(""));
	res = malloc(sizeof(char) * (j - i + 1));
	if (!res)
		return (NULL);
	l = 0;
	while (i < j)
		res[l++] = s1[i++];
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