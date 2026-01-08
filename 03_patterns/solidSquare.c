#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER OF ROW AND COLUMN OF SQUARE:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for( int i=1;i<=n;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}