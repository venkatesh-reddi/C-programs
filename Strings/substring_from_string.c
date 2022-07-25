#include <stdio.h>
void main()
{
    char string[1000], sub[1000];
    int position, length, c = 0;
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);
    printf("Enter the position and length of the substring: ");
    scanf("%d %d", &position, &length);
    while(c < length){
        sub[c] = string[position + c];
        c++;
    }
    sub[c] = '\0';
    printf("The substring is : %s", sub);
}