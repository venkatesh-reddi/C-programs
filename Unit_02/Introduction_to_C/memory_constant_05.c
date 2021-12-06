/* This constant cannot be changed in future.
 The memory constant is defined by "const" before it */

 #include <stdio.h>
 int main()
 {
     float r, area;
     const float PI = 3.14; // Here I used the const which made the float PI unchangeble
     printf("Enter the radius of the circle:   ");
     scanf("%f", &r);
     area = PI*r*r;
     printf("The area of the circle with radius %f is %f.", r, area);
     return 0;
 }