#include<stdio.h>
int main(){
    int n;
    printf("ENETR A NUMBER FOR PATTERN PRINTING:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(i==j || i+j==n+1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}// we have used coordinates for understanding the pattern u should need to visit notes for
// better understanding