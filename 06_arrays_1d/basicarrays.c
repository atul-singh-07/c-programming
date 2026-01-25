// declarartion and initialization of array

#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};// here array is of size 5 means arr naam ka array mein 5 dabbe
    printf("%d\n",arr[2]);//    create ho gaye hai

// updating array  
    arr[4]=100;// ----> {1,2,3,4,100}
    arr[1]=20;//  ----> {1,20,3,4,100}
// foating array
    float a[3]={1.2,2.4,5.6};
    printf("%f\n",a[2]);
// character array
    char crr[5]={'a','n','t','$','%'};
    printf("%c",crr[3]);
    
    return 0;
}
// NOTE: we can print or accesss the values of array through index values