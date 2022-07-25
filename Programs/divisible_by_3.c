#include <stdio.h>
void main()
{
    printf("The numbers divisible by 3: ");
    for(int i = 1; i <= 100; i++) if(i % 3 == 0) printf("%d\t", i);
}