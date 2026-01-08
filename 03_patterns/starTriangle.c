#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER FOR STAR TRIANGLE:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){// THIS DECIDES THE NUMBER OF ROWS
        for(int j=1;j<=i;j++){// THIS DECIDES WHAT THE ROW WILL CONTAIN
            printf("*");
        }
        printf("\n");
    }
    return 0;
}