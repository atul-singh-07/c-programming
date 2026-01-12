#include<stdio.h>
int main(){
    //     1           ###    1                         1   
    //   1 2 1  -----> ##   + 1 2 1 now break this ---> 1 2  +   1
    // 1 2 3 2 1       #      1 2 3 2 1                 1 2 3    2 1 
    //1 2 3 4 3 2 1           1 2 3 4 3 2 1             1 2 3 4  3 2 1 
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int q=1;q<=n-i;q++){// this loop printing spaces or hash
            printf("# ");
        }
        for(int j=1;j<=i;j++){// n=4   1 this loop is printing this pattern separetely
            printf("%d ",j);//         1 2
        }                   //         1 2 3
        int a=i-1;          //         1 2 3 4
        for(int k=1;k<=i-1;k++){// now this loop is controlling rest leftover number
            printf("%d ",a);//     1
            a--;//                 2 1
        }//                        3 2 1 
        printf("\n");
    }
    return 0;
}
// NOTE:remove hash for space printing