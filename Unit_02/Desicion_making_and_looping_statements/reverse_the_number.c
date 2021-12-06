#include <stdio.h>
void main()
{
    int num, rem, rev = 0;
    printf("Enter the number to reverse: ");
    scanf("%d", &num);
    while(num != 0 ){
        rem = num % 10;
        rev = rem + (rev * 10);
        num = num / 10;
        printf("%d\n", rev);
    }
    printf("Reverse is %d", rev);
}