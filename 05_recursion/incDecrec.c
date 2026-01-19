#include<stdio.h>
void incdec(int n){
    if(n==0) return;// base case
    printf("%d\n",n); // will print decreasing number till base case
    incdec(n-1);
    printf("%d\n",n);// this will print increasing number using back tracking
}
int main(){
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    incdec(n);// function call
    return 0;

}
