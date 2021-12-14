#include <stdio.h>
void main()
{
    int m, n;
    int array1[m], array2[n];
    printf("Enter the size of the array one: ");
    scanf("%d", &m);
    printf("Enter the size of the array two: ");
    scanf("%d", &n);
    printf("Enter the elements for the array one: ");
    for(int i = 0; i < m; i++)
    scanf("%d", &array1[i]);
    printf("Enter the elements for the array two: ");
    for(int i = 0; i < n; i++)
    scanf("%d", &array2[i]);
    int k = m + n;
    int array[k];
    for(int i = 0; i < m; i++)
    array[i] = array1[i];
    for(int i = m + 1; i < k; i++){
    for(int j = 0; j < n; j++)
    array[i] = array2[j]; 
    }
    for(int i = 0; i < k; i++)
    printf("%d\t", array[i]);
}