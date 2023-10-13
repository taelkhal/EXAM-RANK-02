#include <unistd.h>
void wdmatch(char *s1, char *s2)
{
    int i;
    int j;
    int count;

    i = 0;
    j = 0;
    count = 0;
    while(s1[i])
    {
        while(s2[j])
        {
            if (s1[i] == s2[j])
            {
                count++;
                break;
            }
            j++;
        }
        i++;
    }
    i = 0;
    j = 0;
    while(s1[i])
        i++;
    if (count == i)
    {
        while(s1[j])
        {
            write(1, &s1[j], 1);
            j++;
        }
    }
}
int main(int ac, char **av)
{
    if (ac == 3)
    {
        wdmatch(av[1], av[2]);
    }
    write(1, "\n", 1);
    return(0);
}