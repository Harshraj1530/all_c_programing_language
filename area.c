#include<stdio.h>
//area and circumfiren of circe

int main()
{
    float r,a,c;
    printf("input the radius in cm =");
    scanf(" %f ", &r);
    a = 3.14*r*r;
    c=2*3.14*r;
printf("area of circle = %.2f sq.cm\n",a);
printf("circumancer =%.2f cm",c);
return 0;

    }
