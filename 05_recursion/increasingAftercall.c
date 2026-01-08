#include<stdio.h>// THIS CODE REPRESENTS THE BEAUTY OF RECURSION
void increasing(int n){
    if(n==0) return;
    increasing(n-1);
    printf("%d\n",n);// JUST BY PUTTING THIS STATEMENT BEFORE AND AFTER THE FUNCTION CALL 
    return;// WE CAN CHANGE THE COMPLETE MEANING OF CODE
}
int main(){
    int n;
    printf("ENTER AN NUMBER:");
    scanf("%d",&n);
    increasing(n);
    return 0;
}// EXPLANATION IN NOTES