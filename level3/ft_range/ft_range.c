#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int *num;
    int len = 0;

    if (start == end)
    {
        num = malloc(sizeof(int)* 1);
        if (!num)
            return (NULL);
        num[0] = start;
    }
    else if (start < end)
    {
        len = end - start + 1;
        num = malloc (sizeof(int) * len);
        if (!num)
            return (NULL);
        i = 0;
        while(i < len)
        {
            num[i] = start;
            start++;
            i++;
        }
    }
    else
    {
        len = start - end + 1;
        num = malloc (sizeof(int) * len);
        if (!num)
            return (NULL);
        while(i < len)
        {
            num[i] = start;
            start--;
            i++;
        }
    }
    return (num);
}