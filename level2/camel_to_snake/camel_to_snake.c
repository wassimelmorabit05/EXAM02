#include <unistd.h>
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        char let;
        while(argv[1][i])
        {
            let = argv[1][i];
            if(let >= 'A' && let <= 'Z')
            {
                write(1, "_", 1);
                let += 32;
                write(1, &let, 1);
            }
            else 
                write(1, &let, 1);
            i++;
        }
    }
    write(1, "\n", 1);
}