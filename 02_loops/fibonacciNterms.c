#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    if(n>=1) printf("THE 1 FIBONACCI NUMBER IS:1\n");// CONDITION CHECKS
    if(n>=2) printf("THE 2 FIBONACCI NUMBER IS:1\n");// CONDITION CHECKS
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("THE %d FIBONACCI NUMBER IS %d\n",i+2,sum);// I+2 BECAUSE TO START THE PRINT
    }//                                                   FROM 3 AND SO ON TILL CONDITION
    return 0;
}