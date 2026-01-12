#include<stdio.h>
int main(){
    //    *              *
    //   ***  ---> ###   *** 
    //  *****      ##  + *****  
    // *******     #     *******
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){// n-i+1 is for ulta triangle but we need -1 -> n-i+1-1
            printf("# ");
        }
        for(int k=1;k<=nst;k++){// HERE NST MEANS THE NUMBER OF STAR CONTROLLING THE NO.
            printf("* ");// OF TIMES THE LOOP WILL RUN FOR PRINTING STAR
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}
// NOTE 1: FOR GETTING THE EXACT PATTERN JUST REMOVE HASH AND PRINTF SPACE THERE