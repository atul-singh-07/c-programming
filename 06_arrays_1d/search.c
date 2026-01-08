#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=2;
    int check=0; // IF CHECK=0 MEANS THE INTEGER IS NOT PRESENT IN THE ARRAY
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            check=1;
            break;
        }
    }
    if(check==0) printf("%d IS NOT PRESENT IN THE ARRAY",x);
    else printf("%d IS PRESENT IN THE ARRAY",x);
    return 0;
}