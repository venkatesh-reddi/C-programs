#include <stdio.h>
void main()
{
    int f1 = 0, f2 = 1, f3, n, i = 3;
    printf("Enter, how many number you need: ");
    scanf("%d", &n);
    printf("%d\t", f1);
    printf("%d\t", f2);
    while(i<=n){
        f3 = f1 + f2;
        printf("%d\t", f3);
        f1 = f2;
        f2 = f3;
        i++;
    }
    printf("\n");
}
