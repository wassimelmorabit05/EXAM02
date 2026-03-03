#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return (result);
}

void print_hex(int a)
{
    char hex[] = "0123456789abcdef";
    if(a >= 16)
        print_hex(a / 16);
    write(1, &hex[a % 16], 1);
}

int main(int argc, char **argv)
{
    int n; 
    if (argc == 2)
    {
        n = ft_atoi(argv[1]);
        if (n == 0)
            write(1, "0", 1);
        else
            print_hex(n);
    }
    write(1, "\n", 1);
    return(0);
}

