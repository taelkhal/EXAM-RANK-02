#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putnbr(int nb)
{
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr (nb % 10);
    }
    else
        ft_putchar(nb + 48);
}
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

int is_prime(int num)
{
	int i = 3;
	
	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num > 2)
		return (0);
	while (i < (num / 2))
	{
		if (num % i == 0)
			return 0;
		i += 2;
	}
	return 1;
}

int main(int ac, char **av)
{
    int sum = 0;
    int nb = ft_atoi(av[1]);

    if (ac == 2)
    {
        while (nb > 0)
        {
            if (is_prime(nb--))
                sum += (nb + 1);
            ft_putnbr(sum);
        }
    }
    if (ac != 2)
        ft_putnbr(0);
    write (1, "\n", 1);
    return (0);
}