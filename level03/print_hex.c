#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int res;

    i = 0;
    res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res);
}
void print_hex(unsigned int i)
{
    char *hexa = "0123456789abcdef";

    if (i < 16)
        write (1, &hexa[i % 16], 1);
    else
    {
        print_hex(i / 16);
        write (1, &hexa[i % 16], 1);
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        print_hex(ft_atoi(av[1]));
    write (1, "\n", 1);
    return (0);
}