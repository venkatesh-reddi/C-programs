#include <stdio.h>
#include <math.h>
void main()
{
    float x1, x2;
    int a, b, c, d;
    printf("Enter value of a,b,c separated by commas: ");
    scanf("%d, %d, %d", &a, &b, &c);
    d = b*b - 4*a*c;
    if(d == 0){
        x1 = b / (2 * a);
        printf("\nRoots are real and equal");
        printf("\nRoot1 and Root2 are same %.2f", x1);
    }
    else if(d > 0){
        x1 = b + sqrt(d) / (2 * a);
        x2 = b - sqrt(d) / (2 * a);
        printf("\nRoots are real and unequal.");
        printf("\nRoot1 is %.2f and Root2 is %.2f", x1, x2);
    }
    else printf("Roots are imaginary");
}