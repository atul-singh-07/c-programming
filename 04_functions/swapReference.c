#include<stdio.h>
void swap(int*x,int*y){// here pointers are used to store the address of the passed variables a and b
    int temp;
    temp=*x; // temp = 2
    *x=*y;// a=9
    *y=temp;// *y = 2 -> b=2; value returning to b
    return;
    
}
int main(){
    int a=2;
    int b=9;
    swap(&a,&b);// passing the address of a and b
    printf("THE VALUE OF A IS:%d\n",a);
    printf("THE VALUE OF B IS:%d",b);
    return 0;

}
