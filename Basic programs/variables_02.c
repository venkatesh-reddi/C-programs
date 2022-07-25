#include <stdio.h>

int a,b; // I declared variables to let the compiler know that I gonna use them further
int c;

int main(void){
    a = 1; // I gave the value to the variable, which is known as variabel assignment
    b = 3;
    c = a + b; // Performed some arithmetic operations on the variables
    printf("The sum is : %d\n", c);
    return 0;
}