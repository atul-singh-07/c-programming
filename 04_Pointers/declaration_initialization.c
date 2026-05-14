#include<stdio.h>
int main(){
    int a=5;
    int* x= &a; // Storing the address of a in pointer x

    printf("%p\n",&x);// will print the address of pointer

    printf("%p\n",&a);// address of a

    printf("%p\n",x);// this is printing the stored address of a in pointer x

    printf("%d",*x);// this will print the value of stored address in pointer x

    return 0;
}