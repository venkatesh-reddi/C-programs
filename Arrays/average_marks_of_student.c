#include <stdio.h>
void main()
{
    int sum, average, marks[5];
    printf("Enter the marks of the student: ");
    for(int i = 0; i < 5; i++) scanf("%d", &marks[i]);
    for(int i = 0; i < 5; i++) sum = sum + marks[i];
    average = sum / 5;
    printf("The average of the marks is: %d", average);
}