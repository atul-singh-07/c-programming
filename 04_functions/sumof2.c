#include<stdio.h>
int add(int a,int b){// here int infront of function add is return type
    return a+b;
}
int main(){// IMP NOTE: THAT ABOVE INT A AND INT B ARE COMPLETELY DIFFERNT FROM BELOW A AND B
    int a;
    printf("ENTER 1ST NUMBER: ");
    scanf("%d",&a);
    int b;
    printf("ENTER THE 2ND NUMBER: ");
    scanf("%d",&b);
    int sum=add(a,b);// function calling and pass by value 
    printf("THE SUM OF NUMBER IS %d",sum);
    return 0;
}