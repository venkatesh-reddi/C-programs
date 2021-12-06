/* Employee net salary */
#include <stdio.h>

void main()
{
    double b,t,d,h,p,l,i,ts,ded,net;
    printf("Enter basic: ");
    scanf("%lf",&b);
    t = (b*10)/100;
    d = (b*8)/100;
    h = (b*20)/100;
    p = (b*5)/100;
    l = (b*10)/100.0;
    i = (b*15)/100.0;
    ts = b+t+d+h;
    ded = p+l+i;
    net = ts-ded;
    printf("\nbasic=%.2lf\nta=%lf\nda=%.2lf\nhra=%.2lf\np=%.2lf\nl=%.2lf\ni=%.2lf\n",b,t,d,h,p,l,i);
    printf("\n total salary = %.2lf\n deduction = %.2lf\n net salary = %.2lf",ts,ded,net);


}