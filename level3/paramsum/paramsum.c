#include <unistd.h>


void ft_putnbr(int nbr)
{
    char c;
    if (nbr > 9)
        ft_putnbr(nbr / 9);
    c = nbr % 10 + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int n;
    int i = 0;
    if (argc == 1)
    {
        write(1, "0\n", 2);
        return (0);
    }
    n = argc - 1;
    ft_putnbr (n);
    write (1, "\n", 1);
    return (0);
}