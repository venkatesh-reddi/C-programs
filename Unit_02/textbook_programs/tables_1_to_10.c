#include <stdio.h>
void main()
{
    for(int i = 1; i <= 10; i++){
        printf("\nMultiplication table of %d\n", i);
        printf("==================================\n");
        for(int j = 1; j <=10; j++){
            printf("%d\tX\t%d\t=\t%d\n", i, j, i*j);
        }
        printf("\n-----------------------------------\n");
    }
}