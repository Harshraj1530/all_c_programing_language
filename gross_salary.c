#include<stdio.h>
//
int main()
{
    float bs,da,hra,gross;               //bs=basic salary
    printf("Enter the salary ->");       //da=dearness allowance
    scanf("%f ",&bs);                    //hra= house rant allowance
    da = 0.4*bs;                         
    hra = 0.2*bs;
    gross = bs+da+hra;
    printf("Basic salary->%f \n",bs);
    printf("Dearness allowance->%f \n",da);
    printf("House rant allowans->%f \n",hra);
    printf("Gross pay salary->%f ",gross);
    return 0;
}