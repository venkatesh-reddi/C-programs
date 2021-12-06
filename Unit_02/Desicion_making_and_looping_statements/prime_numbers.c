#include <stdio.h>
void main()
{
    int n, i, j;
    printf("Enter the range of prime numbers: ");
    scanf("%d", &n);
    printf("Prime Numbers: ");
    for(i = 2; i < n; i++){
        for(j = 2; j < i; j++){
            if(i % j == 0)break;
        }
        if(i == j) printf("%d\t", i);
    }
}