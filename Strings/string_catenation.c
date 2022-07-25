#include <stdio.h>
void main()
{
    char str1[100], str2[100], str3[200];
    int i = 0, j = 0;
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    while(str1[i] != '\0'){
        if (str1[i] == '\n')
        str1[i] = ' ';
        str3[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while(str2[i] != '\0'){
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    printf("Catenated String: %s", str3);
}