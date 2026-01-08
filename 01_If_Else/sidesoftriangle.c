#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER THE FIRST SIDE:");
    scanf("%d",&a);
    printf("ENTER THE SECOND SIDE:");
    scanf("%d",&b);
    printf("ENTER THE THIRD SIDE:");
    scanf("%d",&c);
    if (a+b>c && b+c>a && c+a>b ){// HERE WE HAVE USED THE CONDITION OF TRIANGLE WHERE SUM OF TWO SIDE IS GREATER
        printf("THE ENTER SIDES CAN DEFINITELY FORM A TRIANGLE");//THAN THE THIRD SIDE.
    }
    else{
        printf("THEY CAN CANNOT FORM TRIANGLE");
    }
    return 0;
}