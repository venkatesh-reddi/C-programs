#include <stdio.h>
void main()
{
    int age;
    char name[50];
    printf("Enter your name: ");
    gets(name);
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18) printf("You are eligible to vote, %s!", name);
    else printf("You are not eligible to vote, %s.", name);
}