#include<stdio.h>
#include<limits.h>// NEED TO INCLUDE THIS LIBRARY
int main(){
    int arr[7]={-3,7,-8,-5,-1,68};
    int max= INT_MIN;// THIS INT MIN HAS THE MINIMUM VALUE ON COMPUTER WHICH CAN BE
    for(int i=0;i<=6;i++){// COMPARED TO ANY VALUE OF THE ARRAY;
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}// U CAN ALSO USE INT MAX FOR LARGEST NUMBER TO COMPARE BUT THAT DOES NOT MEAN THAT IT 
// IS A FUNCTION IT IS THE LARGEST VALUE WHICH CAN BE USED TO COMPARE FOR FINDING SMALLEST
// VALUE