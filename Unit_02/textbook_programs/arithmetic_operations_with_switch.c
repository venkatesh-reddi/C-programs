#include <stdio.h>
void main()
{
    int a, b, s;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Choose the operation from the below options: \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Reminder\nEnter your option here: ");
    scanf("%d", &s);
    switch(s){
        case 1: printf("%d + %d = %d", a, b, a+b);
        break;
        case 2: printf("%d - %d = %d", a, b, a-b);
        break;
        case 3: printf("%d * %d = %d", a, b, a*b);
        break;
        case 4: printf("%d / %d = %d", a, b, a/b);
        break;
        case 5: printf("Reminder = %d", a%b);
        break;
    }
}