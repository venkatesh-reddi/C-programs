#include <stdio.h>
main()
{
    int a,b,c;
    printf("Enter first number: \n");
    scanf("%d", &a);
    printf("Enter second number: \n");
    scanf("%d", &b);
     c = a+b;
     printf("Addition value of C is %d\n",c);
     c = a-b;
     printf("Subtraction value of C is %d\n",c);
     c = a*b;
     printf("Multiplication value of C is %d\n", c);
     c = a/b;
     printf("Division value of C is %d\n", c);
}