#include<stdio.h>
//conversion into distance
int main(){
    float km,m,cm,ft,inch;
    printf("Enter the distance in km :");
    scanf("%f ",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;
    printf("Distance in meter = %f\n",m);
    printf("Distance in centimeter = %f\n",cm);
    printf("Distance in feet = %f\n",ft);
    printf("Distance in inches = %f\n",inch);


    return 0;
}