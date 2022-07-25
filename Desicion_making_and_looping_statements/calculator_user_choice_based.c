/* The cases prevents the code from looping over the choices until it matches
the given operation. This saves a bunch of time. */
#include <stdio.h>
void main()
{
    int a,b,ch;
    printf("Choose the operation from the choices below: \n");
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo-division\n");
    printf("\nYour choice: ");
    scanf("%d", &ch);
    printf("Enter two numbers separated by commas:  ");
    scanf("%d,%d", &a, &b);
    switch(ch){
        case 1: printf("Sum = %d", a + b);
        break;
        case 2: printf("Difference = %d", a - b);
        break;
        case 3: printf("Product = %d", a * b);
        break;
        case 4: printf("Division = %d", a / b);
        break;
        case 5: printf("Remainder = %d", a % b);
        break;
        default: printf("Invalid choice...");
    }
}