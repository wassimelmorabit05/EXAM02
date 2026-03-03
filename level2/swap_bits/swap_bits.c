#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
    
    
    return (octet >> 4 | octet << 4);

}

int main()
{
   unsigned char bit =  swap_bits(2);
    printf("%d", bit);
}