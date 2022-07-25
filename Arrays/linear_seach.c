#include <stdio.h>
void main()
{
    int i, a[5], n, c = 0;
    printf("Enter array elements into a matrix: ");
    for( i = 0; i < 5; i++)
    scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &n);
    for(i = 0; i < 5; i++){
        if(n == a[i]) c++;
    }
    if(c > 0) printf("Element found!");
    else printf("Element not found!");
}