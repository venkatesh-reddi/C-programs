#include <stdio.h>
void UpperCase(char []);
void main()
{
    char string[100];
    printf("Enter a string to convert to uppercase: ");
    fgets(string, sizeof(string), stdin);
    UpperCase(string);
    printf("The string in the uppercase is: %s", string);
}
void UpperCase(char s[])
{
    int c = 0;
    while (s[c] != '\0'){
        if (s[c] >= 'a' && s[c] <= 'z')
        s[c] = s[c] - 32;
        c++;
    }
}