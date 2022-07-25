#include <stdio.h>
void main()
{
    int num, temp, rem, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(num != 0){
        rem = num % 10;
        rev = rem + (rev * 10);
        num = num / 10;
    }
    if(temp == rev) printf("%d is a palindrome.", temp);
    else printf("%d is not a palindrome.", temp);
}