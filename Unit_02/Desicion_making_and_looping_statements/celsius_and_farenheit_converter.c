#include <stdio.h>
void main()
{
    int c, t;
    printf("Choose from the option below:(1 or 2 or other to exit) \n");
    printf("1. Celsius to Fahrenheit.\n");
    printf("2. Fahrenheit to celsius.\n");
    scanf("%d", &c);
    if(c==1){
        printf("Enter the temperature in Celsius: \n");
        scanf("%d",&t);
        printf("%d Celsius is %f Fahrenheit", t, (t-32)/1.8);
    }
    if(c==2){
        printf("Enter the temperature in Fahrenheit: \n");
        scanf("%d",&t);
        printf("%d Fahrenheit is %f Celsius", t, (1.8*t)+32);
    }
}