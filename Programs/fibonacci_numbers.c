#include <stdio.h>
void main()
{
    int num, f1 = 0, f2 = 1, f3;
    printf("Enter the range of the fibonacci numbers: ");
    scanf("%d", &num);
    if(num == 1) printf("Fibonacci Series: %d", f1);
    else printf("Fibonacci Series: %d\t%d\t", f1, f2);
    while(num > 2){
        f3 = f2 + f1;
        f1 = f2;
        f2 = f3;
        num--;
        printf("%d\t", f3);
    }
}