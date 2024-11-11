#include<stdio.h>
//marks of subjest
int main(){
    float  a,b,c,d;
    printf("input marks of 3-subject:");
    scanf("%f %f %f",&a,&b,&c);
    d = a+b+c;
printf("total = %f ",d);
printf("%% = %f",d*100/300);

return 0;
}