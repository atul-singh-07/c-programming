#include<stdio.h>
int main(){
    int arr[4];
    for(int i=0;i<=3;i++){
        printf("%d\n",arr[i]);// so here we are trying to print the the values of array 
    }//                          without initializing them
    return 0;
}
// note: and when u do so then u will see some random values and those are garbage values