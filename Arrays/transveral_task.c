#include <stdio.h>
void main()
{
    int list[3];
    printf("Enter the numbers: ");
    for(int i = 0; i < 3; i++) scanf("%d", &list[i]);
    printf("\nThe reverse order is:\t");
    for(int i = 2; i >= 0; i--) printf("%d\t", list[i]);
    
}