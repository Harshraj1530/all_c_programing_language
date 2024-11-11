#include<stdio.h>
//MRP of object
void main()
{
    float p,d,n;
    printf("input MRP of tv :");
    scanf("%f",&p);
    d =p*15/100;
    n =p-d;
    printf("15%% discount = rs.%.2f\n",d);
    printf("net dill= rs %.2f",n);
    return 0;
}