#include<stdio.h>
//side of traingle put the side and show traingle.
int main(){
    int a,b,c,t;
    printf("input the (3)sides of traingle :");
    scanf("%d %d %d",&a,&b,&c);
  if(((a+b>c)&&(b+c>a)&&(c+a>b))&&(a==b&&b==c))
  printf("trangle can be formed \n equlateral trangle");
  else if(((a+b>c)&&(b+c>a)&&(c+a>b))&&((a==b&&b!=c)||(b==c&&c!=a)||(a==c&&c!=b)))
  printf("trangle can be formed \n isoscles trangle");
 else if(((a+b>c)&&(b+c>a)&&(c+a>b)))
   printf("trangle can be formed \n scalene trangle");
else
  printf("trangle can  not formed ");
  return 0;
}
