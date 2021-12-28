#include <stdio.h>
void LowerCase(char []);
void main()
{
    char string[100];
    printf("Enter the string to convert: ");
    fgets(string, sizeof(string), stdin);
    LowerCase(string);
    printf("The converted string is: %s", string);
}
void LowerCase(char s[])
{
    int c = 0; 
    while (s[c] != '\0'){
        if(s[c] >= 'A' && s[c] <= 'Z')
        s[c] = s[c] + 32;
        c++;
    }
}