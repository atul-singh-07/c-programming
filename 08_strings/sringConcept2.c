#include<stdio.h>
//#include<string.h>
int main(){
    char str[40];
    scanf("%s",str);// BUT WHEN U USE SCANF WITH %S IT ONLY INPUT THE FIRST WORD OF SENTENCE
    printf("YOUR INPUT WAS:%s",str);//MEANS TILL THE FIRST BLANK
    return 0;
}