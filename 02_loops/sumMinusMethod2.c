#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int sum=0;
    if(n%2==0){
        sum=-n/2;// DERIVED FORMULAE IN NOTEBOOK
    }
    else{
        sum=-n/2+n;// DERIVED FORMULAE IN NOTEBOOK
    }
    printf("%d",sum);
    return 0;
}