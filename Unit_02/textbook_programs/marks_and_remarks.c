#include <stdio.h>
void main()
{
    int sub1, sub2, sub3;
    double total, percent;
    printf("Enter the 3 marks of student separated by commas: ");
    scanf("%d,%d,%d", &sub1, &sub2, &sub3);
    total = sub1 + sub2 + sub3;
    percent = (double) ((total / 300) * 100);
    if(sub1>35 && sub2>35 && sub3>35){
        if(percent>=75){
            printf("Distinction with %.2f and %d total", percent, total);
        }
        else if(percent>=60){
            printf("First class with %.2f and %d total", percent, total);
        }
        else if(percent>=50){
            printf("Second class with %.2f and %d total", percent, total);
        }
        else{
            printf("Third class with %.2f and %d total", percent, total);
        }
    }
    else{
        printf("Fail");
    }
}