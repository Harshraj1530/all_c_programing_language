#include<stdio.h>
//MRP of any iteams.
 void main()
{
    float mrp,dis,tot;
    printf("input the mrp of book:");
    scanf("%f",&mrp);
    dis=mrp*25/100;
    tot=mrp-dis;
    printf("10%% discount=Rs%.f\n",dis);
    printf("net bil Rs%.2f",tot);
    return 0;

}
