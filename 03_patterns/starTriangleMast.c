#include<stdio.h>
int main(){
    //       *
    //     * *
    //   * * *
    // * * * *
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1-1;j++){// HERE +1 -1 IS DONE FOR RELATING THIS WITH 
            printf("# ");// STAR TRIANGLE ULTA HERE THERE IS ONLY DIFFERENCE OF -1
        }
        for(int k=1;k<=i;k++){// SAME CODE OF STAR TRIANGLE
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}// NOTE 1: IN EVERY PROGRAM WHERE WE REQUIRE SPACES FIRST THEN THERE WE NEED TO EXTRA LOOP
//  NOTE 2: FOR GETTING THE EXACT PATTERN JUCT REMOVE HASH AND PRINTF SPACE THERE