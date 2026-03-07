#include<stdio.h>
int main(){
    int arr[4][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int l1;
    printf("Enter L1:");
    scanf("%d",&l1);
    int r1;
    printf("Enter R1:");
    scanf("%d",&r1);
    int l2;
    printf("Enter L2:");
    scanf("%d",&l2);
    int r2;
    printf("Enter R2:");
    scanf("%d",&r2);

    int sum=0;

    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("The sum of the rectangle (l1,r1) and (l2,r2) is:%d",sum);
    return 0;
}