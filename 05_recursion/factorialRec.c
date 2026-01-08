#include<stdio.h>
int factorial(int n){
    if(n==1||n==0) return 1;
    int recAns = n*factorial(n-1);// HERE THE FUNCTION IS CALLING ITSELF AGAIN AND AGAIN TILL 
    return recAns;// BASE CASE CONDITION
}
int main(){
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d",fact);    
    return 0;
}// COMPLETE EXPLANATION IN NOTES