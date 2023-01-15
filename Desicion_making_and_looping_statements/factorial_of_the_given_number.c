#include <stdio.h>
void main()
{
    int fact = 1, n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i<=n){
        fact *= i;
        i++;
    }
    printf("The factorial of %d is %d\n", n, fact);

}
