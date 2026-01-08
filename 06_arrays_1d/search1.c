#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=2;
    int index=0;
    bool flag=false; // BOOL ONLY STORE TWO VALUES TRUE AND FALSE
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            flag=true;
            index=i;
            break;
        }
    }
    if(flag==false) printf("%d IS NOT PRESENT IN THE ARRAY ",x);
    else printf("%d IS PRESENT IN THE ARRAY AND ITS INDEX IS %d",x,index);
    return 0;
}