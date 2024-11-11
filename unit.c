#include<stdio.h>
//custeamer elictric bill
int main(){
    int bill;
    long int unit;
    printf("input unit :");
    scanf("%ld",&unit);
    if (unit<=50)
    bill=unit*4.10+180;
    else if(unit<=100)
    bill=50*4.10+(unit-50)*5.20+180;
    else if(unit<=200)
    bill =50*4.10+50*5.20+(unit-100)*6.70+180;
    else
        bill=50*4.10+50*5.20+100*6.70+(unit-200)*8.20+180;
        printf("net bill=Rs.%.2ld",bill);
        return 0;

}