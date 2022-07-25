#include <stdio.h>
void main()
{
    int x = 7;
    int y = 8;
    printf("Bitwise operator and is %d\n", x&y);
    printf("Bitwise operator or is %d\n", x|y);
    printf("Bitwise operator xor is %d\n", x^y);
    printf("Bitwise operator complement is %d\n", ~x);
}