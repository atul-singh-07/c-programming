#include<stdio.h>
int stair(int n){
    if(n==1) return 1;// base case 1
    if(n==2) return 2;// base case 2
    if(n==3) return 4;// base case 3
    int ways1=stair(n-1);
    int ways2=stair(n-2);
    int ways3=stair(n-3);
    int totalways=ways1+ways2+ways3;
    return totalways;// return stair(n-1)+stair(n-2)+stair(n-3);
}
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    printf("%d",stair(n));
    return 0;
}