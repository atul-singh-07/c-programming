#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER FOR WHICH U WANT TABLE:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i,n*i);// MODIFIED PRINT STATEMENT TO LOOK LIKE TABLE
    }
    return 0;
}