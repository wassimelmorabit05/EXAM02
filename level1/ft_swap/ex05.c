#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}

int main()
{
    int a = 1337;
    int b = 42;
    printf("a = %d\nb = %d\n\n\n",a,b);
    ft_swap(&a, &b);
    printf("a = %d\nb = %d",a,b);
    return (0);
}