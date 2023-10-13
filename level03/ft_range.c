#include <stdlib.h>
#include <stdio.h>

int ft_abs(int n)
{
    if (n <= 0)
        return (-n);
    return (n);
}

int *ft_range(int start, int end)
{
    int i;
    int *tab;

    i = 0;
    tab = malloc(sizeof (int ) * (ft_abs(end - start) + 1));
    while (start < end)
    {
        tab[i] = start;
        start++;
        i++;
    }
    while (start > end)
    {
        tab[i] = start;
        start--;
        i++;
    }
    tab[i] = end;
    return (tab);
}
