#include <stdio.h>
void main()
{
    int array[100], position, n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    printf("Enter the %d elements of the array: ");
    for(int i = 0; i < n; i++) scanf("%d", &array[i]);
    printf("Enter the position of the number to be removed: ");
    scanf("%d", &position);
    if (position >= n+1)
    printf("Deletion not possible.\n");
    else
   {
    for (int i = position - 1; i < n - 1; i++)
    array[i] = array[i+1];
    for(int i = 0; i < n-1; i++)
    printf("%d\t", array[i]);
   }
}