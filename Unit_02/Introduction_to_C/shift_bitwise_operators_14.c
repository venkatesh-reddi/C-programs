#include <stdio.h>
void main()
{
    int i = 42;
    printf("Before shifting is %d\n", i);
    printf("After shifting right is %d\n", i>>3);
    printf("After shifting left %d\n", i<<3);
}