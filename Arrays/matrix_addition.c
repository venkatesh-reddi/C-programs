#include <stdio.h>
void main()
{
    int a[10][10], b[10][10], c[10][10], i, j, m, n, p, q;
    printf("Enter the size of the matrix a: ");
    scanf("%d %d", &m, &n);
    printf("Enter the size of the matrix 2: ");
    scanf("%d %d", &p, &q);
    if( m == p && n == q){
        printf("Enter the elements for the martix a: ");
        for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
        scanf("%d", &a[i][j]);
        printf("Enter the elements for the matrix b: ");
        for(i = 0; i < p; i++)
        for(j = 0; j < q; j++)
        scanf("%d", &b[i][j]);
        for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
        c[i][j] = a[i][j] + b[i][j];
        printf("Matrix addition: \n");
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++)
            printf("%d\t", c[i][j]);
            printf("\n");
        }
    }
    else 
    printf("Matrix addition is not possible.");
}