#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result);
}
int is_prime(int nbr)
{
    int i = 2;
    while (i <= nbr / 2)
    {
        if (nbr % i == 0)
            return(0);
        i++;
    }
    return (1);
}

void ft_putnbr(int nbr)
{
    char c;
    if (nbr > 9)
        ft_putnbr(nbr / 10);
    c = nbr % 10 + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int num;
    int sum = 0;
    int i = 2;
    if (argc == 2)
    {
        num = ft_atoi(argv[1]);
        while (i <= num)
        {
            if(is_prime(i))
                sum += i;
            i++;
        }
    }
    ft_putnbr(sum);
    write(1,"\n", 1);
    return (0);
}