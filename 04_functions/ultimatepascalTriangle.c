#include<stdio.h>
int main(){
    int n;
    printf("ENTER N: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int first=1;
        for (int j=0;j<=i;j++){// iC(j+1)
            printf("%d ",first);
            first= first*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}