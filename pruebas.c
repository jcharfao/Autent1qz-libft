#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	int i;
	int flag;

	flag = 0;
	i = 0;
	while (((char*)str)[i] != '\0' && flag == 0)
	{
		if (((char*)str)[i] == c)
		{
			return ((char*)&str[i]);
			flag = 1;
		}
		i++;
	}
	if (c == '\0')
		return ((char*)&str[i]);
	return (NULL);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	l;
	char *res;
	
	i = 0;
	l = 0;
	j = ft_strlen(s1);
	if (s1 == NULL)
		return (NULL);
	while (s1[i], ft_strchr(set, s1[i]))
		i++;
	while (s1[j - 1] > 0, ft_strchr(set, s1[j - 1]))
		j--;
	res = malloc(sizeof(char) * (j - i + 1));
	if (!res)
		return (NULL);
	res[l] = '\0';
	return (res);
}

int main()
{
    const char *original = "   ¡Hola, mundo!   ";
    const char *set = " ";

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
}