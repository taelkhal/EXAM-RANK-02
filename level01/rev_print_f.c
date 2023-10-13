#include <unistd.h>

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
char *ft_rev_print(char *str)
{
    int i;

    i = ft_strlen(str) - 1;
    while (i >= 0)
    {
        write (1, &str[i], 1);
        i--;
    }
    return(str);
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        ft_rev_print(av[1]);
    }
    write (1, "\n", 1);
    return (0);
}