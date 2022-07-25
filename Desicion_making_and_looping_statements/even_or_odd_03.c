#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number:  ");
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("\n%d is an even number.");
    }
    else{
        printf("\n%d is a odd number.");
    }
}