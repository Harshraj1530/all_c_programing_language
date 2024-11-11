#include<stdio.h>
//show the net bill.
int main(){
    float netbill,dis,pdis,p;
    printf("input MRP OF the book. :");
    scanf("%f",&p);
    pdis= (p>=5000)?25:15;
    dis= p*pdis/100;
    netbill=p-dis;
    printf("%f %% discount =Rs.%.2f",pdis,dis);
    printf("\n net bill = Rs.%.2f",netbill);
    return 0;
}