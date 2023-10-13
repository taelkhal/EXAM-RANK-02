#include <stdlib.h>

int ft_total_word(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i])
    {
        if (str[i] &&  (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        else
        {
            j++;
            while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
                i++;
        }
    }
    return (j);
}

int ft_len_word(char *str)
{
    int i;

    i = 0;
    while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        i++;
    return (i);
}

char *add_word(char *str)
{
    int len;
    char *s;
    int i;

    i = 0;
    len = ft_len_word(str);
    s = malloc(sizeof(char) * (len + 1));
    while (len > 0)
    {
        s[i] = str[i];
        i++;
        len--;
    }
    s[i] = '\0';
    return (s);
}
char **ft_split(char *str)
{
    char **s;
    int i;
    int j;

    i = 0;
    j = 0;
    s = malloc(sizeof(char *) * (ft_total_word(str) + 1));
    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\t'))
            i++;
        if (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            s[j] = add_word(&str[i]);
            i = i + ft_len_word(&str[i]);
            j++;
        }
        i++;
    }
    s[j] = 0;
    return (s);
}
