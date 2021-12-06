/* Here let's use some of the data types and see how they are differnt
    from each of  them even they are declared in the same way */

#include <stdio.h>
int main()
{
    char ch = 'B';
    printf("%c\n", ch); // printing character data
    int x = 45, y = 90;
    printf("%d\n", x);
    printf("%i\n", y);
    float f = 12.67;
    printf("%f\n", f); // prints float value
    printf("%e\n", f); // prints in scientific notation
    int a = 67;
    printf("%o\n", a); // prints in octal format
    printf("%x\n", a); // prints in hex format
    char str[] = "Hello World";
    printf("%s\n", str);
    printf("%20s\n", str);  // shift to the right 20 characters including the string
    printf("%-20s\n", str); // left align
    printf("%20.5s\n", str); // shift to the right 20 characters including the  string and print string upto 5 characters.
    printf("%-20.5s\n", str); // left align and print string upto 5 character.


    
}