#include<stdio.h>// CLASSICAL ARMSTRONG PROBLEM
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int ld;
    int sum=0;
    int temp=n;// STORING THE VALUE OF N
    while(n>0){
        ld=n%10;
        sum=sum+ld*ld*ld;// MAIN CONCEPT OF ARMSTRONG
        n=n/10;
    }
    if(temp==sum) printf("ARMSTRONG NUMBER");// COMPARISON
    else printf("NOT A ARMSTRONG NUMBER");
    return 0;
}