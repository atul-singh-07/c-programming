#include<stdio.h>
int main(){
    int a=25;
    int* x=&a;

    *x=7;// here a is getting changed means we are able to change data using pointer at location
    printf("%d",a);
    return 0;
}