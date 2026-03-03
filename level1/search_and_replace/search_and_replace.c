#include<unistd.h>
unsigned int strleng(char *string)
{
    unsigned int len = 0;
    while(string[len])
        len++;
    return (len);
}
int main(int argc, char **argv)
{
    int i = 0;
    if(argc == 4)
    {
        if(strleng(argv[2]) != 1 || strleng(argv[3]) != 1)
        {
            write(1, "\n", 1);
            return (0);
        }
            
        while(argv[1][i])
        {
            if(argv[1][i] == argv[2][0])
                write(1, &argv[3][0], 1);
            else 
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}