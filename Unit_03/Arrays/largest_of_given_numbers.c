#include <stdio.h>
void main()
{
    int big, list[10];
    printf("Enter the numbers: ");
    for(int i = 0; i < 10; i++) scanf("%d", &list[i]);
    big = list[0];
    for(int i = 0; i < 10; i++) if(list[i] > big) big = list[i];
    printf("The largest of all is %d", big);
}