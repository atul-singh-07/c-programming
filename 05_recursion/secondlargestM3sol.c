// NOTE: but this code fails in array having repeating values{1,2,3,4,4,3,2,1} and too
//       next to next like 4 after 4 here
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={8,7,6,5,4,3,2,1};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
        smax=max;// its is now also containing int_min after the first iteration
        max=arr[i];// and max=8
        }
        else if(smax<arr[i]){// max>arr[i]
            smax=arr[i];
        }
    }
    printf("The second largest element is:%d",smax);
    return 0;
}
// First iteration (i = 0, value = 8)
// Condition:
// if (max < arr[i])
// → INT_MIN < 8 ---> true
// So:
// smax = max;  --> still INT_MIN
// max  = 8;
// max  = 8
// smax = INT_MIN
// For every next element (7, 6, 5, ...):
// max < arr[i]   ❌ false
// because max is already 8.
// So the if block never runs again.
// Now the else if comes into play
// else if (smax < arr[i])
//     smax = arr[i];
// This condition runs for values smaller than max
// It updates smax with the largest value among the remaining elements
// So step by step:// smax = 7 → 6 → 5 → 4 → 3 → 2 → 1
// But since 7 is the largest among them, smax finally stays:
// smax = 7

