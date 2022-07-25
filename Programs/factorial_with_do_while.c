#include <stdio.h>
void main()
{
    int num, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num != 0)
    {do{
        fact = fact * num;
        num--;
    }while(num != 0);
    }
    printf("The factorial is %d.", fact);
    
}