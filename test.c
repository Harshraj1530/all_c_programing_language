#include<stdio.h>
//test the number is divisibel by 3 and 5;
int main(){
    int x;
    printf("input the whole no, :");
    scanf("%d",&x);
    if(x % 5==0 && x % 3==0 )
    printf("it is a divisbel by 3 and 5 no.\n");
    else 
    printf("it is not divisibel by 3 and 5 no");
    return 0;

}
