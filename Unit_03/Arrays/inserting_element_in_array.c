#include <stdio.h>
void main()
{
    int N, y;
    int num, pos, list[N];
    printf("Enter the number of elements in the list: ");
    scanf("%d", &y);
    N = y + 1;
    printf("Enter the elements: ");
    for(int i = 0; i < N - 1; i++)
    scanf("%d", &list[i]);
    printf("Enter the number to be inserted in the list: ");
    scanf("%d", &num);
    printf("Enter the position of the above entered number: ");
    scanf("%d", &pos);
    for(int i = N; i > pos; i--)
    list[i] = list[i - 1];
    list[pos] = num;
    for(int i = 0; i < N; i++)
    printf("%d\t", list[i]);
}