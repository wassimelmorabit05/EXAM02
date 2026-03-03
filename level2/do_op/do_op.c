#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>
int main(int argc, char **argv)
{
    int result;
    char op = argv[2][0];
    int a = atoi(argv[1]);
    int b = atoi(argv[3]);

    if(op == '+')
        result = a + b;
    if(op == '-')
        result = a - b;
    if(op == '*')
        result = a * b;
    if(op == '/')
        result = a / b;
    printf("%d", result);
    
}