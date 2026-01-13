#include<stdio.h>// HERE IN THIS CODE WE ARE APPLYING THE APPROACH LINE BY LINE 
int main(){// INCREASING OR DECREASING NST AND NSP SIMULTANEOULY
    int n;
    printf("ENTER THE NUMBER OF LINES:");
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1;
    int ml=n/2+1;// middle line of diamond
    for(int i=1;i<=n;i++){// no. of spaces
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int k=1;k<=nst;k++){// no.of stars
            printf("* ");
        }
        if(i<ml){// condition where till where nsp-- and nst=nst+2;
            nsp--;
            nst+=2;
        }
        else{// else nsp++ and nst=nst-2;
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}