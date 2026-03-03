#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    char letter;
    if(argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                letter = ((argv[1][i] - 'a' + 1) % 26) + 'a';
                write(1, &letter, 1);
            }
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                letter = ((argv[1][i] - 'A' + 1) % 26) + 'A';
                write(1, &letter, 1);
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}