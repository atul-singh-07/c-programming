#include<stdio.h>
int main(){
    //AP=100 97 94 91 88 ........ TILL THE NUMBER ARE POSITIVE
    int a=100;//EXTRA VARIABLE WITH STARTING VALUE OF AP
    for(int i=1;i<=34;i++){// the loop is running 34 times because till 32 the values will be positive
        printf("%d ",a);// as per the question
        a=a-3;
    }
    return 0;
}