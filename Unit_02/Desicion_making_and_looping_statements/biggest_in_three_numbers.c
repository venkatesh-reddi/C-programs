#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers separated by commas\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is largest number.", a);
        }
        else{
            printf("%d is largest number.", c);
        }
    }
    else{
        if(b>c){
            printf("%d is largest number.", b);
        }
        else{
            printf("%d is largest number.", c);
        }
    }

}