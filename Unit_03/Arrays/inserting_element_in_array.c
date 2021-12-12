#include <stdio.h>
void main()
{
    int array[100], position, n, c, value;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the %d elements of the list: ", n);
    for(c = 0; c < n; c++)
    scanf("%d", &array[c]);
    printf("Enter the position for the new element in the array: ");
    scanf("%d", &position);
    printf("Enter the value of the new element: ");
    scanf("%d", &value);
    for(c = n - 1; c >= position - 1; c--)
    array[c + 1] = array[c];
    array[position - 1] = value;
    for(c = 0; c < n + 1; c++)
    printf("%d\t", array[c]);
}