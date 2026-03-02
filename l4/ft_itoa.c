#include <stdlib.h>
#include <stdio.h>

int len_nbr(int nbr)
{
    int len = 0;

    if (nbr < 0)
    {
        nbr *= -1;
        len++;
    }
    while (nbr > 0)
    {
        len++;
        nbr = nbr / 10;
    }
    return (len);
}
char	*ft_itoa(int nbr)
{
    int len;
    char *str;

    len = len_nbr(nbr);
    str = malloc(sizeof(int) * len);
    if (!str)
        return (NULL);
    str[len] = '\0';
    len--;
    if (nbr < 0)
    {
        str[0] = '-';
        nbr *= -1;
        while (len > 0)
        {
            str[len] = nbr % 10 + '0';
            nbr /= 10; 
            len--;
        }
    }
    else
    {
        while (len >= 0)
        {
            str[len] = nbr % 10 + '0';
            nbr /= 10;
            len--;
        }
    }
    return (str);
}
int main()
{
    printf("%s\n", ft_itoa(-9));
    printf("%s\n", ft_itoa(-999999));
    return (0);
}