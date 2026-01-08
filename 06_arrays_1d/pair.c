#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x=12;
    int totalpairs=0;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){// j=i+1 because we are skipping repetition of pairs
            if(arr[i]+arr[j]==x){
                totalpairs++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d",totalpairs);
    return 0;
}// HERE THE QUESTION WAS TO FIND THE TOTAL NUMBER OF PAIRS IN THE ARRAY WHOSE SUM IS EQUAL
//  TO THE GIVEN VALUE X