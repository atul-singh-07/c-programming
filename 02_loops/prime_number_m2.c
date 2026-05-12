#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("Entered number %d is a composite number",n);
            break;
        }
        else{
            printf("Prime number");
            break;
        }
    }
    return 0;
}