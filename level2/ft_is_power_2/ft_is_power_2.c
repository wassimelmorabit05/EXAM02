#include <stdio.h>

int is_power_of_2 (unsigned int n)
{
    unsigned int i = 2;
    unsigned int power  = 2;
    if(n == 1)
        return (1);
    while (i < n)
    {
        if (power == n)
            return (1);
        power *= 2;
        i++;
    }
    return (0);
}

int main()
{
    int n = is_power_of_2(32);
    printf("%d", n);
}
