#include<stdio.h>// THIS CODE IS SOMEWHAT WORKING WITH THE CONCEPT OF FIBONACCI SERIES
int stair(int n){
    if(n==1) return 1;// BASE CASE
    if(n==2) return 2;// BASE CASE
    int totalways=stair(n-1)+stair(n-2);// THIS IS BECAUSE WE ARE ALLOWED 1 STEP OR 2 STEP
    return totalways;// AT A TIME
}
int main(){
    int n;
    printf("ENTER THE NUMBER OF STAIRS: ");
    scanf("%d",&n);
    int ways=stair(n);
    printf("%d",ways);
    return 0;
}