
int	ft_atoi(const char *str)
{
    int i;
    int a;
    int t;

    i = 0;
    a = 1;
    t = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if (str[i] == '-')
    {
        a = a * -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        t = (t * 10) + (str[i] - '0');
        i++;
    }
    return (t * a);
}
