#include <stdio.h>
void main()
{
    int i, b, p, res = 1;
    printf("Enter base: ");
    scanf("%d", &b);
    printf("Enter exponent: ");
    scanf("%d", &p);
    if(b < 1 || p < 0){
        res = 0;
    }
    else{
        for(i = 1; i <= p; i++){
            res = res * b;
        }
    }
    printf("Result is %d", res);
}