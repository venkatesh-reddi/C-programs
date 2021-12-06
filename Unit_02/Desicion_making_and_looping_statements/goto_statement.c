#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a, b;
    printf("Enter the numbers seperated by commas: ");
    scanf("%d,%d", &a, &b);
    if(a == b){
        goto equal;
    }
    else{
        printf("\nA and B are not equal.");
        exit(0);
    }
    equal:
    printf("A and B are equal");
}