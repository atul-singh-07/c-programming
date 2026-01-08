#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]s",str);// THIS WILL WORK
    printf("YOUR INPUT WAS:%s",str);
    return 0;
    // WE HAVE SEEN THAT WHEN WE USE ONLY SCANF WITH ONLY %s IT ALWAYS INPUTS THE FIRST WORD BUT WHEN WE MODIFY
    // THIS SCANF %s IT START WORKING AS GETS FUNCTION OF STRING
}