#include<stdio.h>
int main(){
    void fun();// FUNCTION PROTOTYPE : is used when u need to declare your function below
    fun();// the main () or the function calling
    return 0;
}
void fun(){
    printf("HELLO");
}