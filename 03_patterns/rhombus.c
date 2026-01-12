#include<stdio.h>
int main(){
    //     ****            ###    ****
    //    ****     ----->  ##   + ****
    //   ****              #      ****
    //  ****                      ****
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){// FOR SPACES OR HASHES n-i+1-1
            printf("# ");
        }
        for(int k=1;k<=n;k++){// STAR SOLID STAR SQUARE
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
// NOTE 1: FOR GETTING THE EXACT PATTERN JUCT REMOVE HASH AND PRINTF SPACE THERE