// Count the number of triplets whose sum is equal to the given value x.
#include<stdio.h>
int main(){
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    int arr[8]={1,2,3,4,5,6,7,8};
    int count=0;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            for(int k=j+1;k<=7;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                    count++;
                }
            }
        }
    }
    printf("The total number of pairs is:%d",count);
    return 0;
}// note: Here in the code of triplet, we have used the same concept of the pair.C, where
//        in the first loop we Initialising the i=0. And then in the 2nd loop, we are
//        having the condition of J=I+1 for accessing the second value. And in the 3rd loop,
//        the condition will get K=j+1.for accessing the third value or element 
//        This is because we don't want repetition of the pairs