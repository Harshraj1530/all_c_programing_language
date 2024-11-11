#include<stdio.h>
//
int main()
{
   float km,m,cm,ft,inch;
   printf("Enter in distance in km->");
   scanf("%f ",&km);
   m=km*1000;
   cm=m*100;
   inch=cm/2.54;
   ft=inch/12;
   printf("Distance in meater->%f \n",m);
      printf("Distance in mcentemeter->%f \n",cm);
   printf("Distance in feet->%f \n",ft);
   printf("Distance in inche->%f \n",inch);


    return 0;
}