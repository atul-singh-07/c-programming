#include<stdio.h>
int main(){
    //  # # # A           # # #      A    WRITE THE CODE OF BOTH PATTERN 
    //  # # A B    ---->  # #      + A B 
    //  # A B C           #          A B C
    //  A B C D                      A B C D 
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("# ");
        }
        for(int k=1;k<=i;k++){
            int x=k+64;
            char ch=(char)x;// TYPE CASTING
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}
// NOTE 1: FOR GETTING THE EXACT PATTERN JUCT REMOVE HASH AND PRINTF SPACE THERES