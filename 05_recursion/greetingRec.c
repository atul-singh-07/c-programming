#include<stdio.h>
void greeting(int n){
    if(n==0) return;
    printf("GOOD MORINING\n");
    greeting(n-1);
    return;
}
int main(){
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    greeting(n);
    return 0;
}