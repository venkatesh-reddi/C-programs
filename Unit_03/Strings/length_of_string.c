#include <stdio.h>
void main()
{
    char s[1000];
    int c = 0;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    while(s[c]!='\0'){
    c++;
    }
    printf("Length of the string is %d.", c);
}