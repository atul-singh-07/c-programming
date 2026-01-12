#include<stdio.h>
int main(){
    //      1                     1
    //    1 2 3   ----> # # #  +  1 2 3 
    //   1 2 3 4 5      # #       1 2 3 4 5
    // 1 2 3 4 5 6 7    #         1 2 3 4 5 6 7
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){// n-i+1-1 relate with ulta triangle
            printf("# ");
        }
        for(int k=1;k<=a;k++){// here a is nst controlling no. of numbers printing in every
            printf("%d ",k);// line
        }
        a=a+2;
        printf("\n");
    }
    return 0;
}
// NOTE 1: FOR GETTING THE EXACT PATTERN JUST REMOVE HASH AND PRINTF SPACE THERE