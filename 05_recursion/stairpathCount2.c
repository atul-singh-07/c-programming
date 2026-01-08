#include<stdio.h>
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;// COMPLETE EXPLANATION IN NOTES 
    return stair(n-1)+stair(n-2)+stair(n-3);// THIS IS BECAUSE WE ARE ALLOWED TO JUMP 1,2,3
}// STEP AT A TIME IN NTH STAIRS
int main(){
    int n;
    printf("ENTER THE NUMBER OF STAIRS: ");
    scanf("%d",&n);
    int ways=stair(n);
    printf("%d",ways);
    return 0;
}