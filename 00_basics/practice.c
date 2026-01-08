#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int d;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            d=j+64;
            char ch=(char)d;
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}