#include<unistd.h>
void print_number(int num)
{
    char x;
    if (num > 9)
        print_number(num/10);
    x = num % 10 + '0';
    write (1, &x, 1);
}
int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0)
            write(1, "fizz", 4);
        if (i % 5 == 0)
            write( 1, "buzz", 4);
        if ((i % 3 != 0) && (i % 5 != 0))
            print_number(i);
        write(1, "\n", 1);
        i++;
    }

}