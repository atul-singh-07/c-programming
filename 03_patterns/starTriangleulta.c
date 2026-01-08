#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER FOR ULTA TRAINGLE:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n+1-i;j++){// here what we need with the condition j<=n+1-i is that
            printf("*");//when i =1 we need to run the loop 4 times if n=4 its little tricky
        }
        printf("\n");
    }
    return 0;
}