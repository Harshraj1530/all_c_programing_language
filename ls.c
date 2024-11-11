#include<stdio.h>
//show the largest and smallest no.
int main(){
    int a,b,max,min;
    printf("input the any two nos. :");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    min=(a<b)?a:b;
    printf("Largest no =%d\n",max);
    printf("smallest no =%d",min);
    return 0;
}