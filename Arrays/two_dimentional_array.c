#include <stdio.h>
void main()
{
    int a[2][2], i, j;
    printf("Enter the elements of two dimentsional array: ");
    for(i = 0; i < 2; i++)
    for(j = 0; j < 2; j++)
    scanf("%d", &a[i][j]);
    printf("The elements are:\n");
    for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
    printf("%d\t", a[i][j]); 
    }   
    printf("\n");
    }
}