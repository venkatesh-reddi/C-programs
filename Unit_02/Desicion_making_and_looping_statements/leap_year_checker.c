#include <stdio.h>
void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(year % 4 == 0 && year % 100 != 0){
        printf("\nGiven year %d is a Leap Year.", year);
    }
    else{
        printf("\nGiven year %d is not a Leap Year.", year);
    }
}