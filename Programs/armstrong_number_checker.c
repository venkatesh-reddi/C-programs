#include <stdio.h>
void main()
{
    int num, temp, anum, var = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    anum = num;
    while(num != 0){
        temp = num % 10;
        var = (temp*temp*temp) + var;
        num = num / 10;
    }
    if(anum == var) printf("%d is an Armstrong Number.", anum);
    else printf("%d is not an Armstrong Number.", anum);
}