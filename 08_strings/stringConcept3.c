#include<stdio.h>
#include<string.h>// NEED TO BE INCLUDED WHEN USING STRINGS FUNCTION LIKE PUT GET
int main(){
    char str[40];
    gets(str);// IS A STRING FUCTION TO INPUT STRING
    printf("YOUR INPUT WAS:%s",str);
    return 0;
}