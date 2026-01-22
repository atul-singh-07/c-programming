#include<stdio.h>
int maze(int cr, int cc, int er, int ec ){
    int rightways=0;// significance of this is to add the right ways here
    int downways=0;// and all the downways here
    if(cr==er && cc==ec) return 1;// because these condition means we are at final position
    if(cr==er){// only rightways possible
        rightways+=maze(cr,cc+1,er,ec);
    }
    if(cc==ec){// only downways possible
        downways+=maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){// here we called both ways
        rightways+=maze(cr,cc+1,er,ec);
        downways+=maze(cr+1,cc,er,ec);
    }
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    int n;
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d",&n);
    int m;
    printf("ENTER NUMBER OF COLUMNS:");
    scanf("%d",&m);
    int noofways=maze(1,1,n,m);
    printf("%d",noofways);
    return 0;
}