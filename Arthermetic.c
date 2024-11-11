#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//Arthemetic calculation
int main(){
    int a,b,n;
    printf("\t\t MAIN MENU \n");
    printf("\t 1.Addition \n");
     printf("\t 2. subration \n");
     printf("\t 3.division \n");
     printf("\t 4.multiplicatin \n");
     printf("\t 5.remainder \n");
     printf("\t 6.exit \n");
     printf("\t choice(1-6): ");
     scanf("%d",&n);
    if (n>=1 && n<=5)
    {
        printf("input any two whole nos. :");
        scanf("%d %d",&a,&b);
    } 
    switch (n)
    {
    case 1:
        printf("Addition =%d",a+b);
        break;
     case 2:
        printf("subtraction =%d",a-b);
        break;
     case 3:
        printf("division =%d",a/b);
        break; 
     case 4:
        printf("multiplication =%d",a*b);
        break;   
     case 5:
        printf("remender =%d",a%b);
        break;
        case 6:
        exit (0);
        break;
    default:
    printf("invaled choice");
        break;
    }
    return 0;
}