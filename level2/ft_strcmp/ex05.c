#include <stdio.h>
#include <string.h>

int     ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] || s2[i])
    { 
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

int main()
{
    char *s1 = "a";
    char *s2 = "";
    int n = ft_strcmp(s1, s2);
    int n1 = strcmp(s1, s2);

    printf("%d\n\n\n%d", n , n1);
}
