/* This code gives the grade and remark based on his total average and individual marks
One needs to have atleast 35 in every subject and average should be good */
#include <stdio.h>
void main()
{
    int m1,m2,m3; // This  takes the marks of student from his 3 subjects.
    float avg, tot;
    printf("Enter the marks in 3 subjects.( seperated by commas )\n");
    scanf("%d,%d,%d", &m1, &m2, &m3);
    tot = m1 + m2 + m3;
    avg = tot/3;
    if(m1>35 && m2>35 && m3>35){
        if(avg>=75){
            printf("Distinction with %.2f", avg);
        }
        else if(avg>=60){
            printf("First class with %.2f", avg);
        }
        else if(avg>=50){
            printf("Second class with %.2f", avg);
        }
        else{
            printf("Third class with %.2f", avg);
        }
    }
    else{
        printf("Fail");
    }
}