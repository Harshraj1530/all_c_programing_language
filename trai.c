#include<stdio.h>
//print the area of traingle
int main(){
float b,h,area;
printf("input the base of traingle. :");
scanf("%f",&b);
printf("input the height of traingle. :");
scanf("%f",&h);
area=(b*h)/2;
printf("area of traingle=%.2f",area);
return 0;
}