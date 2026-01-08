#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER FOR FINDING FACTORIAL:");
    scanf("%d",&n);
    int product=1;
    for(int i=1;i<=n;i++){
        product=product*i;
    }
    printf("THE FACTORIAL OF THE ENTERED NUMBER IS:%d",product);
    return 0;
}