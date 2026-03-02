#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int nb = 2;
    int nbr;
    int first = 1;

    if (argc == 2)
    {
        nbr = atoi(argv[1]);
        if (nbr ==1)
        {
            printf("1\n");
            return (0);
        }
        while (nb <= nbr)
        {
            if (nbr % nb == 0)
            {
                if (!first)
                    printf("*");
                printf("%d", nb);
                nbr /= nb;
                first = 0;
            }
            else
                nb++;
        }
    }
    printf("\n");
    return (0);
}