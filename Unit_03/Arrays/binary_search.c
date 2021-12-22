#include <stdio.h>
void main()
{
    int a[100], first, last, middle, n, search;
    printf("Enter the size of the list: ");
    scanf("%d", &n);
    printf("Enter the %d elements for the list: ");
    for(int i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("Enter the element to search:");
    scanf("%d", &search);
    first = 0; 
    last = n - 1;
    middle = (first + last) / 2;
    while(first <= last){
        if(a[middle] < search)
        first = middle + 1;
        else if(a[middle] == search){
        printf("%d element is found at %d.", search, middle + 1);
        break;            
        }
    else
        last = middle - 1;
        middle = (first + last) / 2;
    if(first > last)
    printf("%d is not found in the list.", search);
    }
}