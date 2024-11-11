#include<stdio.h>
//intrchange the value of two variable
int main(){
    int a=5,b=10;
    printf("Befor swap : a=%d,b=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap : a=%d ,b=%d",a,b);
    return 0;
}