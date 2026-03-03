#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    int i = 0;
    char c;
    while(argv[1][i])
    {
        if((argv[1][i] >= 'A' && argv[1][i] <= 'Z') || (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
            c = (argv[1][i] | 32) - 'a' + 1;
        else
            c = 1;
        while (c)
        {
            write (1, &argv[1][i], 1);
            c--;
        }
        i++;
    }
}