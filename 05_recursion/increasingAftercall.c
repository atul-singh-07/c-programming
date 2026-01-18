#include<stdio.h>// this code represent the beauty of recursion and the concept of [backtracing]
void increasing(int n){
    if(n==0) return;
    increasing(n-1);// here the values of n is decreasing till n==0
    printf("%d\n",n);// then the values of n will print in accordance to backtraced number starting from 1 
    return;
}
int main(){
    int n;
    printf("ENTER AN NUMBER:");
    scanf("%d",&n);
    increasing(n);
    return 0;

}// EXPLANATION IN NOTES
