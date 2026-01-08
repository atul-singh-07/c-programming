#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("ENTER NUMBER %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE INTEGER WHICH U NEED TO BE SMALLEST AMONG THE ARRAY:");
    int x;
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x){
            count++;
        }
    }
    printf("THE NUMBER OD DIGIT GREATER THAN THE ENTERD INTEGER IS:%d",count);
    return 0;
}