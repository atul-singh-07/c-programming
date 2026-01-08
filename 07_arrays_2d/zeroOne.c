#include<stdio.h>
int main(){
    int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,0,0,1}};
    // 1 0 1 1 -> ROW ZERO
    // 0 1 0 1 -> ROW ONE
    // 1 0 0 1 -> ROW THREE
    int maxCount=0;
    int maxindx=0;// FOR GETTING i FOR ROW COUNT
    for(int i=0;i<3;i++){// PEHLE YEH FIRST ROW KE 1 KO COUNT KAREGA THEN O SE RESTART HOKAR
        int count=0;// SECOND ROW COUNT AND THIRD ROW COUNT
        for(int j=0;j<4;j++){
            if(arr[i][j]==1) count++;
        }
        if(maxCount<count){
            maxCount=count;
            maxindx=i;
        }
        
    }
    printf("THE MAX COUNT OF ONE IS %d IN ROW NUMBER %d",maxCount,maxindx);
    return 0;
}