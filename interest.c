#include<stdio.h>
#include<math.h>
// calulate the SI OR CI.
int main(){
    float p,r,t,si,ci;
    printf("input value for P,R,T:");
    scanf("%f %f %f", &p,&r,&t);
    si=(p*r*t)/100;
    ci=p*pow(1+r/100,t)-p;
    printf("SI =Rs%.2f\n",si);
    printf("CI =Rs%.2f",ci);
    return 0;
}