#include<stdio.h>
int main(){
    int a=100;
    for(int i=1;a>0;i++){// USED DIFFERENT CONDITION a>0
        printf("%d ",a);// the loop will run till the a>0 condition cme to false
        a=a-3;
    }
    return 0;
}