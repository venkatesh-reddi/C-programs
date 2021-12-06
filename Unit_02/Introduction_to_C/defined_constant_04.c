#include <stdio.h>
/* Now I gonna define the value of PI as 3.14
 just as below. */
#define PI 3.14

void main()
{
    float r, area;
    printf("Enter the radius of a circle\n");
    scanf("%f",&r);
    area = PI*r*r;
    printf("The area of the circle with radius - %f is %f", r, area);
}