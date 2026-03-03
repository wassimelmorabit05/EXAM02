#include <stdio.h>

char    *strrev(char *str)
{
    int i = 0;
    int j = 0;
    char reverce;

    while(str[i])
        i++;
    i--;
    while (j < i)
    {
        reverce = str[j];
        str[j] = str[i];
        str[i] = reverce;
        j++;
        i--;
    }
    return (str);
}

int main()
{
    char str[] = "morady";
    printf("%s", strrev(str));
}