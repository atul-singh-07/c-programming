#include<stdio.h>
int main(){
    // 1      FLOYDS TRIANGLE
    // 2 3
    // 4 5 6 
    // 7 8 9 10
    int n;
    printf("ENTER A NUMBER FOR PATTERN PRINTING:");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){// these loops are only creating the stucture of the triangle printing the values of a 
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a++;// incrementing a after every iteration of loop
        }
        printf("\n");
    }
    return 0;

}
