#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightways=0;
    int downways=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){// only right ways call
        rightways += maze(cr,cc+1,er,ec);
    }
    if(cc=ec){ //only downways call
        downways += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightways += maze(cr,cc+1,er,ec);
        downways += maze(cr+1,cc,er,ec);
    }
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    int n; // no. of rows
    printf("ENTER THE NUMBER OF ROWS OF MAZE PATH: ");
    scanf("%d",&n);
    int m;
    printf("ENTER A NUMBER OF COLUMNS FOR THE MAZE PATH: ");
    scanf("%d",&m);
    int noOfWays=maze(1,1,n,m);
    printf("%d",noOfWays);
    return 0;
}