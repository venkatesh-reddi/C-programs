/* This program prints all the compostite number
upto the given number using nested loops */

#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter a number:  ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++){
        for(j = i - 1; j > 1; j--){
            if(i%j == 0){
                printf("%d is a composite\n", i);
                break;
            }
        }
    }
}