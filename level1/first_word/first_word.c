#include <unistd.h>
int main(int argc, char **argv)
{
    if( argc != 2)
        return (write (1, "\n", 1));
    int i;
    char *string = argv[1];

    i = 0;

    while((string[i] == ' ' || string[i]=='\t' )&& string[i])
        i++;
    while(string[i] != ' ' && string[i]!='\t' && string[i])
    {
        write(1, &string[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
