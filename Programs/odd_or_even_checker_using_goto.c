#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0) goto even;
    else goto odd;
    even:
    printf("%d is an Even number.");
    exit(0); 
    odd:
    printf("%d is an Odd number.");
    exit(0);
}