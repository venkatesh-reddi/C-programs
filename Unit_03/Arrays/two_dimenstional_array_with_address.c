#include <stdio.h>
void main()
{
    int a[100][100], i, j, m, n;
    printf("Enter the size of the array (in format m X n): ");
    scanf("%d X %d", &m, &n);
    printf("Enter the elements for the array: ");
    for(i = 0; i < m; i++)
    for(j = 0; j < n; j++)
    scanf("%d", &a[i][j]);
    printf("The elements are:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++)
        printf("%d\t", a[i][j]);
        printf("\n");
    }
}