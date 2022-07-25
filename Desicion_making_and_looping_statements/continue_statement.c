#include <stdio.h>
void main()
{
    int i = 1, num, sum = 0;
    for(i = 0; i < 5; i++){
        printf("Enter an integer: ");
        scanf("%d", &num);
        if(num < 0){
            printf("\nYou have entered a negative number.");
            continue;
        }
        sum += num;
    }
    printf("\nThe sum of the positive Integers entered = %d\n", sum);
}