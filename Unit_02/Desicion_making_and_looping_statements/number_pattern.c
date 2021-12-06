#include <stdio.h>
void main()
{
    int i = 1,j;
    while(i <= 5){
        j = 1;
        while(j <= i){
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }
}