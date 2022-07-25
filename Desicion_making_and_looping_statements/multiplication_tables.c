#include <stdio.h>
void main()
{
    int table, i = 1;
    printf("Enter the number to get the multiplication table: ");
    scanf("%d", &table);
    do{
        printf("%d\tX\t%d\t=\t%d\n", table, i, table*i);
        i++;
    }while(i <= 10);
}