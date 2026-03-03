#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 7;
    unsigned char bit;
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
    print_bits(255);
    return (0);
}