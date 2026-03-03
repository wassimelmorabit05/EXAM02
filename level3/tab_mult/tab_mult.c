#include <unistd.h>

void ft_putnbr(int nbr)
{
    char c;
    if (nbr > 9)
        ft_putnbr(nbr / 10);
    c = nbr % 10 + '0';
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

int main(int argc, char **argv)
{
    int i = 1;
    int n;
    char c;
    if (argc == 2)
    {
        n = ft_atoi(argv[1]);
        if (n < 0)
            return (0);
        while (i < 10)
        {
            ft_putnbr(i);
            write (1, " * ", 3);
            ft_putnbr(n);
            write (1, " = ", 3);
            ft_putnbr(i * n);
            write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}