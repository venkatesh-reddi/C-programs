#include <stdio.h>
void main()
{
    int i;
    float f;
    char ch;
    f = 23.56;
    ch = 'A';
    i = 234;
    printf("Before conversion\n");
    printf("i = %d\n", i);
    printf("ch = %c\n", ch);
    printf("f = %f\n", f);
    printf("\n\n\nAfter conversion because of promotion\n");
    i = ch;
    printf("i = %d\n", i);
    printf("ch = %c\n", ch);
    printf("f = %f\n", f);
    printf("\n\n\nAfter conversion because of demotion\n");
    i = f;
    printf("i = %d\n", i);
    printf("f = %f\n", f);
    printf("ch = %c\n", ch);
}