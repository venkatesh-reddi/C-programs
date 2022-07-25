#include <stdio.h>
void main()
{
    int num;
    printf("Enter the range of Prime Numbers: ");
    scanf("%d", &num);
    printf("Prime Numbers : ");
    for(int i = 2; i <= num; i++){
        for(int j = 2; j < i; j++){
                if(i % j == 0) break;
                else{ 
                    printf("%d\t", i);
                    break;
                    }
        }
    }
    if(num == 2) printf("%d", num);
}