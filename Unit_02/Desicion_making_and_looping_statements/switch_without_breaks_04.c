#include <stdio.h>
void main()
{
    int i;
    printf("Enter you choice: ");
    scanf("%d", &i);
    switch(i){
        case 1: printf("This is case 1\n");
        case 2: printf("This is case 2\n");
        default: printf("This is default case\n");
    }
}