#include <stdio.h>
void main()
{
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum = (num * (num + 1)) / 2;
    printf("The sum of %d Natural numbers is %d", num, sum);
}