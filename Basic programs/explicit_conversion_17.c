#include <stdio.h>
void main()
{
    int totalmarks;
    float avg;
    printf("Enter total marks: ");
    scanf("%d", &totalmarks);
    avg = (float)totalmarks/6;
    printf("Average marks is %f", avg);
}