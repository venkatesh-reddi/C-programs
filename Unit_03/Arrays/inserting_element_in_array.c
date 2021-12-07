#include <stdio.h>
void main()
{
    int n, list[10], num, pos;
    printf("Enter the length of list: ");
    scanf("%d", &n);
    printf("Enter the elements for list: ");
    for(int i = 0; i < n; i++) scanf("%d", &list[i]);
    printf("Enter the number to be added followed by position where to be added: ");
    scanf("%d %d", &num, &pos);
    list[pos - 1] = num;
    printf("List of elements after insertion of %d: ", num);
    for(int i = 0; i < n; i++) printf("%d\t", list[i]);
}