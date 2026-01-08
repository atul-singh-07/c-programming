#include<stdio.h>// THIS WILL WORK FOR INCREASING AND DECREASING ARRAY
#include<limits.h>// ONLY NOT AT arr{1,2,,4,4,5,} as here 4 are double for curing this 
int main(){// we have secondlargest 4;
    int arr[5]={5,4,3,2,1};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=4;i++){
        if(max<arr[i]){
            smax=max;// THIS WILL HOLD THE PREVIOUS MAX VALUE
            max=arr[i];// THIS WILL HOLD THE MAX VALUE AT THE LAST
        }
        else if(smax<arr[i]){// MAX>ARR[I] THATS WHEN THIS CONDITION WILL RUN   
            smax=arr[i];
        }
    }
    printf("THE SECOND LARGEST VALUE IS:%d",smax);
    return 0;
}