#include <stdio.h>
void main()
{
    int i, j, a[5];
    printf("Enter 5 elements to sort: ");
    for(i = 0; i < 5; i++)
    scanf("%d", &a[i]);
    for(i = 0; i < 5; i++)
    for(j = i + 1; j < 5; j++)
    if(a[i] > a[j]){
        int c;
        c = a[i];
        a[i] = a[j];
        a[j] = c;
    }
    printf("The sorted list is:\t");
    for(i = 0; i < 5; i++)
    printf("%d\t", a[i]);
}