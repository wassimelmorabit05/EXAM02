#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    int num = tab[0];
    if (len > 0)
    {
        while (i < len)
        {
            if (tab[i] > num)
                num = tab[i];
            i++;
        }
    }
    return (num);
}
int main()
{
    int *numbers;
    int n = max(numbers, 0);
    printf("%d", n);
    return (0);
}