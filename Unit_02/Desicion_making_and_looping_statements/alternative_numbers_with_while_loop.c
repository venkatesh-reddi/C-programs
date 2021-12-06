#include <stdio.h>
void main()
{
    int x,n;
    printf("Enter the starting number in the range: ");
    scanf("%d", &x);
    printf("Enter the ending number in the range: ");
    scanf("%d", &n);
    while(x<=n){
        printf("%d\t", x);
        x = x + 2;
    }
}