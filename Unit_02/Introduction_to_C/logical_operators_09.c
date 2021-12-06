#include <stdio.h>
void main()
{
    int a = 5, b = 20, c;
    if(a&&b){
        printf("Condition a&&b is true\n");
    }
    else{
        printf("Condition a&&b is not true\n");
    }
    if(a||b){
        printf("Condition a||b is true\n");
    }
    else{
        printf("Condition a||b is not true\n");
    }
    if(!(a&&b)){
        printf("Condition !(a&&b) is true\n");
    }
    else{
        printf("Condition !(a&&b) is not true\n");
    }
}