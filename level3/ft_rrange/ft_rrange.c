#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int i = 0;
    int len = 0;
    int *num;

    if (start == end)
    {
        num = malloc(sizeof(int) * 1);
        if (!num)
            return (NULL);
        num[0] = end;
    }
    else if (start < end)
    {
        len = end - start + 1;
        num = malloc (sizeof(int) * len);
        if(!num)
            return (NULL);
        while (i < len)
        {
            num[i] = end;
            end--;
            i++;
        }
    }
    else
    {
        len = start - end + 1;
        num = malloc (sizeof(int) * len);
        if(!num)
            return (NULL);
        while (i < len)
        {
            num[i] = end;
            end++;
            i++;
        }

    }
    return (num);
}
