#include<stdio.h>
int main(){
    char arr[]="COLLEGE WALLAH IS THE BEST CHANNEL FOR CODERS"; // HERE IN THIS TYPE OF STRING
    int i=0;// INITIALISATION THE COMPUTER AUTOMATICALLY ADD NULL CHARACTER AT THE LAST OF
    while(arr[i]!='\0'){// THE STRING
        printf("%c",arr[i]);
        i++;
    }
    return 0;

}