#include <stdio.h>
void main()
{
    int num, rev = 0, temp;
    printf("Enter the number to reverse: ");
    scanf("%d", &num);
    while(num != 0){
        temp = num % 10;
        rev = temp + (rev * 10);
        num = num / 10;
    }
    printf("The reverse number is %d.", rev);
}