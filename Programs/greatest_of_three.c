#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three numbers separated by commas: ");
    scanf("%d,%d,%d", &a, &b, &c);
    if(a > b){
        if(a > b) printf("%d is the greatest number.", a);
        else printf("%d is the greatesh number.", b);
    }
    else{
        if(b > c) printf("%d is the greatesh number.", b);
        else printf("%d is the greatest number.", c);
    }
}