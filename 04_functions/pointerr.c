#include<stdio.h>
int main(){
    int a=25;
    int* x= &a;// int*-> is a pointer which is used to store value of address
    ///*x=7;// VVIP changing the value of a directly from here
    int** y=&x;// int**-> int*ka address store karta hai
    int*** z=&y;
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%d",***z);
    return 0;
}