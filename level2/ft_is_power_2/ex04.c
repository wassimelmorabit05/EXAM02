#include <stdio.h>

int     is_power_of_2(unsigned int n)
{
    int i = 1;
    int power = 2;
    if (n == 1)
        return (1);
    while (i < n)
    {
        power *= 2;
        if (power == n)
            return(1);
        i++;
    }
    return (0);
}

int main()
{
    int i = is_power_of_2(0);
    printf("%d", i);
}