#include <stdio.h>
void main()
{
    int arr1[50][50], arr2[50][50], i, j, r, c;
    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements for the matrix:\n");
    for(i = 0; i < r; i++)
    for(j = 0; j < c; j++){
        printf("Element - [%d],[%d] : ", i, j);
        scanf("%d", &arr1[i][j]);
    }
    for(i = 0; i < r; i++)
    for(j = 0; j < c; j++){
        arr2[j][i] = arr1[i][j];
    }
    for(i = 0; i < r; i++){
        printf("\n");
    for(j = 0; j < c; j++){
        printf("%d\t", arr2[i][j]);
    }
    }
}