/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:04:19 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/19 23:33:46 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int countstrs(char *t, char c)
{
	int i;
	int strnum;
	
	strnum = 0;
	i = 0;
	while (t[i])
	{
		if (t[i] != c)
		{
			strnum++;
			while (t[i] != c && t[i])
				i++;
		}
		else
			i++;
	}
	return (strnum + 1);
	
}


int main()
{
	char str[] = "hoolalalaaalllllllaaa";
	char c = 'l';
	printf("%d\n", countstrs(str, c));
}



/*char **ft_split(char const *s, char c)
{
	int boxcount = countstrs(s, c);		
}*/
