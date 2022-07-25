#include <stdio.h>
void DisplayString(char str[]);
void main()
{
    char str[50];
    printf("Enter string:");
    fgets(str, sizeof(str), stdin);
    DisplayString(str);
}
void DisplayString(char str[])
{
    printf("String Output: ");
    puts(str);
}