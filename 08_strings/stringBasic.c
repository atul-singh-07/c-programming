#include<stdio.h>
int main(){
    char arr[5]={'a','b','c','d','f'};
    printf("%c",arr[0]);
    printf("%p\n",&arr[0]);// THE RESULT OF THE ADDRESS OF STRING CHARACTER CLEARLY SHOWS 
    printf("%p\n",&arr[1]);// THAT CHARCTER STORES 1 BYTES->8 BITS
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p",&arr[4]);
    return 0;
}// WORK COMPLETELY SAME AS ARRAY OF INT THE ONLY THING NEEDED TO BE IN MIND IS U
// SHOULD CHANGE THAT INT TO CHAR ANB THE FORMAT SPECIFIER TO %c
//a0061FF1B
//0061FF1C
//0061FF1D EXAMPLES OF THE ADDRESS
//0061FF1E
//0061FF1F