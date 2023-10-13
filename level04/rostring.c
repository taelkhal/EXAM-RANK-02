#include <unistd.h>

int is_space(char c)
{
	if ((c == ' ' || c == '\t'))
		return(1);
	return (0);
}
int main(int ac, char **av)
{
    int i = 0;
    int fw = 0;
    int efw = 0;
    int f = 0;
    if (ac >= 2)
    {
        while (av[1][i] && is_space(av[1][i]))
            i++;
        fw = i;
        while (av[1][i] && !is_space(av[1][i]))
            i++;
        efw = i;
        while(av[1][i])
        {
            while (av[1][i] && is_space(av[1][i]))
                i++;
            while (av[1][i] && !is_space(av[1][i]))
            {
                write(1, &av[1][i], 1);
                i++;
                f = 1;
            }
            if(f == 1)
                write(1, " ", 1);
        }
        while(fw < efw)
        {
            write(1, &av[1][fw], 1);
            fw++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
