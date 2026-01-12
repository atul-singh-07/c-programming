#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a=(n/2)+1;// condition where the middle row and column will hit and print
            if(j==a || i==a) printf("* ");
            else printf("# ");
        }
        printf("\n");
    }
    return 0;
}
// step 1: u should know how to print square of star 
// step 2: apply the condition a=n/2+1 for hitting middle row and column that too in integer
//         form