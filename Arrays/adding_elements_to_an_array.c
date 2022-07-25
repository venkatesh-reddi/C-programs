#include <stdio.h>
void main()
{
    int sum, a[5];
    printf("Enter the elements to the array: \n");
    for(int i = 0; i < 5; i++) scanf("%d", &a[i]);
    for(int i = 0; i < 5; i++) sum = sum + a[i];
    printf("The sum is %d", sum);
}