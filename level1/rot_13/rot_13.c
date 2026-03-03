#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {   
        char letter;
        while(argv[1][i])
        {
            letter = argv[1][i]; 
            if(letter >= 'a' && letter <= 'z')
            {
                letter = ((letter - 'a' + 13) % 26) + 'a';
                write(1, &letter, 1);
            }
            else if(letter >= 'A' && letter <= 'Z')
            {
                letter = ((letter - 'A' + 13) % 26) + 'A';;
                write(1, &letter, 1);
            }
            else
                write(1, &letter, 1);
            i++;
        }
    }
    write(1, "\n", 1);
}