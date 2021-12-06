#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    if(a<b){
        printf("%d is the highest number.\n", b);
    }
    else{
        printf("%d is the highest number.\n", a);
    }
}