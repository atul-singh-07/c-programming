#include<stdio.h>
void sum(int n,int s){// N,0 INTIALLY.
    if(n==0){
        printf("%d",s);// THIS STATEMENT WILL WORK AT THE VERY LAST
        return;
    }
    sum(n-1,s+n);
    return;
}
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    sum(n,0);// CALL BY VALUE 
    return 0;
}