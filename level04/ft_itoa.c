#include <stdlib.h>

int ft_len_number(int nb)
{
    int i = 0;

    if (nb <= 0)
        i++;
    while (nb != 0)
    {
        nb = nb / 10;
        i++;
    }
    return (i);
}
char *ft_itoa(int nbr)
{
    int i;
    int len;
    long int number;
    char *str;

    i = 0;
    len = ft_len_number(nbr);
    number = nbr;
    str = malloc(sizeof(char ) * len + 1);
    if (number < 0)
    {
        i = 1;
        number = number * -1;
    }
    str[len] = '\0';
    while (len--)
    {
        str[len] = number % 10 + '0';
        number = number / 10;
    }
    if (i > 0)
        str[0] = '-';
    return (str);
}
