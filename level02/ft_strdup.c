#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
char    *ft_strdup(char *src)
{
    int i;
    char *copy;

    i = 0;
    copy = malloc (sizeof(char) * (ft_strlen(src) + 1));
    if (copy == 0)
        return (0);
    while (src[i] != '\0')
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}
int main()
{
    char a[] = "taha";
    printf ("%s", ft_strdup(a));
}