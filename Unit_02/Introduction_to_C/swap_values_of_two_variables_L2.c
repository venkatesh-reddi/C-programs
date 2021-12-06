#include <stdio.h>
void main()
{
    int x = 10, y = 5;
    x = x + y; // Here x becomes 10 + 5 = 15
    y = x - y; // Now y is 15 - 5 = 10
    x = x - y; // Now x is 15 - 10 = 5
    printf("After swaping the values: x = %d, y = %d\n", x, y);
}