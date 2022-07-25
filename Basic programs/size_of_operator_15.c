#include <stdio.h>
void main()
{
    int a = 20;
    const char ch;
    printf("Size of variable a is %d\n", sizeof(a));
    printf("Size fo data type float is %d\n", sizeof(float));
    printf("Size of character constant ch is %d\n", sizeof(ch));
}