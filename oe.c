#include<stdio.h>
// show the odd and even no.
int main(){
    int a;
    printf("input the whole no. :");
    scanf("%d",&a);
    if(a%2==0){
        printf("even \n");
    }
    else
    {
        printf("odd \n");
    }
    return 0;
}