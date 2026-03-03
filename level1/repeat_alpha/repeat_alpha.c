#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    int i = 0;
    int k;
    while(argv[1][i])
    {
        if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            k = argv[1][i] - 65;
            while(k)
            {
                write(1, &argv[1][i], 1);
                k--;
            }
        }
        if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            k = argv[1][i] - 97;
            while(k)
            {
                write(1, &argv[1][i], 1);
                k--;
            }
        }
        write(1, &argv[1][i], 1);
        i++;
    }
}