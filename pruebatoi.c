/*#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
char *ft_substr(const char *s, unsigned int start, size_t len)
{
    char *d;
    size_t i;
    
    if (!s || start >= strlen(s))
        return (NULL);
    if (len > strlen(s) - start)
        len = strlen(s) - start;
    d = (char *)malloc(sizeof(char) * (len + 1));
    i = start;
    while (i < start + len && s[i])
    {
        d[i - start] = s[i];
        i++;
    }
    d[i] = '\0';
    return (d);
}

// Aquí colocar la definición de ft_substr

int main() {
    const char *s = "¡Hola, mundo!";
    unsigned int start = 0;
    size_t len = 50;

    char *subcadena = ft_substr(s, start, len);
    
    if (subcadena) {
        printf("Subcadena: %s\n", subcadena);
        free(subcadena); // Liberar la memoria asignada a la subcadena
    } else {
        printf("Error: No se pudo crear la subcadena.\n");
    }

    return 0;
}*/