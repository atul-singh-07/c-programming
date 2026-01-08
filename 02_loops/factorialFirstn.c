#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int product=1;
    for(int i=1;i<=n;i++){
        product=product*i;
        printf("THE FACTORIAL OF %d IS:%d\n",i,product);
    }
    
    return 0;
}