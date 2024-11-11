#include<stdio.h>
//
int main(){
    int n,sum=0, r=0;
    printf("enter a no.");
    scanf("%d",&n);
    int temp=n;
    for (;n>0;)
    {
       r=r*10;
       r=r+(n%10);
       n=n/10; 
       
    }
      sum=r+temp;
    printf("sum of no = %d",sum);
    return 0;
}