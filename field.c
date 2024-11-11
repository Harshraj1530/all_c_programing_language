#include<stdio.h>
//setting field width
int main(){
    int a,b,c,d;
    a=4;
    b=3;
    c=9;
    d=5;
    printf("%6d%6d \n",a,b);
    printf("%-6d%-6d",c,d);
    return 0;

}