#include<stdio.h>
int main(){
    // ###A       ###   A
    // ##ABC ---> ##  + ABC
    // #ABCDE     #     ABCDE
    // ABCDEFG          ABCDEFG
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){// for hashes or spaces
        for(int j=1;j<=n-i;j++){// n-i+1-1
            printf("# ");
        }
        for(int k=1;k<=a;k++){// a working same as nst contolling number of alphabet
            int x=k+64;//        printing in each line..
            char ch=(char)x;// type casting
            printf("%c ",ch);
        }
        a=a+2;
        printf("\n");
    }
    return 0;
}
// NOTE 1: FOR GETTING THE EXACT PATTERN JUST REMOVE HASH AND PRINTF SPACE THERE