#include<stdio.h>
int main(){
    char arr[]={'a','t','u','l','\0'};// NULL CHARCTER WITH ASCII VALUE 0
    int i=0;
    while(arr[i]!='\0'){// NULL CHARACTER
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}