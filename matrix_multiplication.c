#include <stdio.h>
void main()
{
    int arr1[50][50], arr2[50][50], arr3[50][50], i, j, k, r1, r2, c1, c2, sum = 0;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if(c1 != r2){
        printf("Multiplication is not possible.");
    }
    else{
        printf("Enter the elements for the first matrix:\n");
        for(i = 0; i < r1; i++){
            for(j = 0; j < c1; j++){
                printf("Element - [%d],[%d] : ", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("Enter the elements for the second matrix:\n");
        for(i = 0; i < r2; i++){
            for(j = 0; j < c2; j++){
                printf("Element - [%d],[%d] : ", i, j);
                scanf("%d", &arr2[i][j]);
            }
        }
        //multiplication of matrices.
        for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++)
        arr3[i][j] = 0;
        
        for(i = 0; i < r1; i++){
            for(j = 0; j < c2; j++){
                sum = 0;
                for(k = 0; k < c1; k++)
                sum = sum + arr1[i][k] * arr2[k][j];
                arr3[i][j] = sum;
            }
        }
        printf("The multiplication of two matrices is :\n");
        for(i = 0; i < r1; i++){
            printf("\n");
            for(j = 0; j < c2; j++)
            printf("%d\t", arr3[i][j]);
        }
    }
}