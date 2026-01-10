#include<stdio.h>
int main(){
    for(int i=65;i<=90;i++){
        char ch=(char)i;// TYPE CASTING
        printf("%c ->",ch);
        printf("%d\n",i);
    }
    return 0;
}