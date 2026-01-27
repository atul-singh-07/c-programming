#include<stdio.h>
void fun(int a){
    a=7;
    return;
}
int main(){
    int a=4;
    printf("%d\n",a);
    fun(a);
    printf("%d\n",a);
    return 0;
}// note:here the main objective of the code is to make u understand how function work like
//       in the main function the value of a=4 and in fun function its a=7 but both are
//       different variables of a because of that there will be no change in the value of 
//       variable a . 