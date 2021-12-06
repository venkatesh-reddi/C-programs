#include <stdio.h>
void main()
{
    int num, rem, temp, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(num != 0){
        rem = num % 10;
        rev = rem + (rev * 10);
        num = num / 10;
    }
    if(rev == temp){
        printf("%d is a Palindrome.", temp);
    }
    else{
        printf("%d is not a palindrome.", temp);
    }
}