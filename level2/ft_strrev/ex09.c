#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char c;
    while (str[i])
        i++;
    i--;
    while (j < i)
    {
        c = str[j];
        str[j] = str[i];
        str[i] = c;
        j++;
        i--;
    }
    return (str);
}

int main ()
{
    char str[] = "123456789";
    printf("%s", ft_strrev(str));
    return (0);
}