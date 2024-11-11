#include<stdio.h>
// Perimeter and area of a rectangle
int main()
{
  float l,b,c,d;
  printf("input the length,breath:");
  scanf("%f %f",&l,&b);
  c=2*(l+b);
  d =l*b;
  printf("ractangle of permeter =%.2f\n",c);
  printf("area of rectangle =%f",d);
  return 0;


}