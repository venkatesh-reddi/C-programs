#include <stdio.h>
void main()
{
    int i;
    printf("Enter a choice: ");
    scanf("%d", &i);
    switch(i){
        case 1: printf("This is case 1\n");
        break;
        case 2: printf("This is case 2\n");
        break;
        default: printf("This is default case\n");
    }
}