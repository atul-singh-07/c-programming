#include<stdio.h>
int main(){
    int n;//itni baar loop chalega
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    // 4 7 10 13 16 19 ...... upto n terms
    // we are going to use extra variable for using the same statement of for loop
    int a=4;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a+3;
    }

    return 0;
}