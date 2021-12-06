#include <stdio.h>
void main()
{
    int num1, num2, large;
    printf("Enter two numbers: \n");
    scanf("%d%d", &num1, &num2);
    large = (num1 > num2) ? num1 : num2;
    printf("The large number is %d", large);

}