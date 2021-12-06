#include <stdio.h>

void main()
{
    // This is first example, uses getchar() to take input and putchar() to output the given input.
    // char ch;
    // printf("Enter character: ");
    // ch = getchar();
    // printf("The given character is  ");
    // putchar(ch); 

    // This is second example, uses gets() to take input and puts() to output the given input.
     char ch[50];
     printf("Enter name:  ");
     gets(ch);
     printf("The name is:  ");
     puts(ch);


}