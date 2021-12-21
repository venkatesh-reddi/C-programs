#include <stdio.h>
void main()
{
    int a[10], i, n, m, c = 0, l, u, mid;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements of the array: ", n);
    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("The elements of the array are:");
    for(i = 0; i < n; i++)
    printf("\t%d", a[i]);
    printf("Enter the element to search: ");
    scanf("%d", &m);
    l = 0, u = n - 1;
    while(1 <= u){
        mid = (1 + u)/2;
        if(m == a[mid]){
            c = 1;
            break;
        }
        else if(m < a[mid]){
            u = mid - 1;
        }
        else l = mid + 1;
    }
    if(c == 0){
        printf("The number is not in the list.");
    }
    else{
        printf("The number is found.");
    }
}
