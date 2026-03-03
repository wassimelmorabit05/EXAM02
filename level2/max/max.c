#include <stdio.h>

int max(int* tab, unsigned int len)
{
    unsigned int i = 1;
    int max_num = tab[0]; // 2 5 7 6 4  len = 5
    while (i < len)
    {
        if (tab[i] > max_num)
            max_num = tab[i];
        i++;
    }
    return (max_num);
}

int main ()
{
    int numbres[5] = {4, 8, 9, 12, -4};
    int maxnum = max(numbres, 5);
    printf("%d", maxnum);
}