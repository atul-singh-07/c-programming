#include<stdio.h>
void fun(int arr[]){
    arr[0]=10;
    return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);
    return 0;
}// HERE THE OUTPUT COMING IS 1 AND 10 THIS IS BECAUSE WHEN WE PASS AN ARRAY TO A FUNCTION
// IS IS PASSED BY CALL BY REFERNCE WHICH MEANS THE ADDRESS OF THE ARRAY IS BEING PASSED
// WHICH MAKE BOTH THE FUNCTIONS LINK WITH EACH OTHER

