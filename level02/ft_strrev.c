int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
char    *ft_strrev(char *str)
{
    int i;
    int len;
    char swp;
    i = 0;
    len = ft_strlen(str) - 1;
    while (len >= i)
    {
        swp = str[i];
        str[i] = str[len];
        str[len] = swp;
        i++;
        len--;
    }
    return (str);
}
