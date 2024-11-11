#include<stdio.h>
//find the angle of traingle.
int main(){
    int a1,a2,a3;
    printf("input two angles :");
    scanf("%d %d",&a1,&a2);
    a3= 180-(a1+a2);
    printf("third angle=%d",a3);
    return 0;

}