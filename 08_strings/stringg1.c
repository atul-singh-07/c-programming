#include<stdio.h>
int main(){
    char str[]="college wallah";
    str[1]=98;// THIS WILL NOT GET ERROR IT WILL BE USED SA ASCII VALUE OF B
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}