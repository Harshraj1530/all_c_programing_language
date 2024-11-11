#include<stdio.h>
//show the temperature(celsius\fahrenheit).
int main(){
float f,c;
printf("input the temperature in fahrenheit:");
scanf("%f",&f);
c=(f-32)/1.8;
printf("equivalent tempr. in celsis =%.2f",c);
return 0;
}