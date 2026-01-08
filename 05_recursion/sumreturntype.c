#include<stdio.h>
int sum(int n){
    if(n==0||n==1) return 1;
    int recAns=n+sum(n-1);// THE CODE IS COMPLETELY THE SAME AS THAT OF THE FACTORIAL
    return recAns;// JUST CAHNGED A PLUS SYMBOL IN PLACE OF MULTIPLICATION
}
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int s=sum(n);
    printf("%d",s);
    return 0;
}