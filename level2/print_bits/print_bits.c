#include <unistd.h>

void    printf_bits(unsigned char octet)
{
    char bit;
    int i = 7;
    while (i >= 0)
    {
        if ((octet >> i) & 1)
            bit = '1';
        else
            bit = '0';
        write(1, &bit, 1);
        i--;
    }
}

int main()
{
    printf_bits(8);
    return(0);
}