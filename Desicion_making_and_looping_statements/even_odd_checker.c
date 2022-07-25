/* This prints all the numbers and specifies whether they are odd or even. */
#include <stdio.h>
void main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i = ++i){
        switch(i % 2){
            case 0: printf("The number %d is Even.\n", i);
            break;
            case 1: printf("The number %d is Odd.\n", i);
            break;
        }
    }
}