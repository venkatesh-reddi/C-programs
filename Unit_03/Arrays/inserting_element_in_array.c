#include <stdio.h>
void main()
{
    int x, y;
    int list[x + 1], num, pos;
    printf("Enter the length of list: ");
    scanf("%d", &x);
    printf("Enter the elements for list: ");
    for(int i = 0; i < x; i++) scanf("%d", &list[i]);
    printf("Enter the number to be added followed by position where to be added: ");
    scanf("%d %d", &num, &pos);
    for(int i =  x; i >= pos; i--) list[i] = list[i - 1];
    list[pos - 1] = num;
    printf("List of elements after insertion of %d: ", num);
    for(int i = 0; i < x + 1; i++) printf("%d\t", list[i]);
}

/* input:
    lenght of list = 5
    elements of  list = 1 2 3 4 5
    next prompt for num and at pos = 6 2

    Expected output = 1 6 2 3 4 5

    Actuall output = 1 2 3 4 5 5
    
    Try to fix this one... */