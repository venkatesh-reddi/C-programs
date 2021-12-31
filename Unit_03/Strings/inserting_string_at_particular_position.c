#include <stdio.h>
#include <string.h>
void main()
{
    char a[100], b[100];
    int p = 0, r = 0, i = 0;
    int t = 0;
    int s, n;
    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);
    printf("Enter the position where the string to be inseted: ");
    scanf("%d", &p);
    r = strlen(a) - 1;
    n = strlen(b) - 1;
    i = 0;
    s = n + r;
    for(i = p; i < s; i++){
        if(t < n){
            a[i] = b[t];
            t++;
        }
    }
    printf("String after insertion: %s", a);
}