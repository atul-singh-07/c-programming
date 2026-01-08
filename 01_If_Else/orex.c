#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    if(n%3==0 || n%5==0){// USED OR LOGICAL OPERATOR TO CHECK WHEATHER BOTH OR ONE 
        printf("THE DIGIT %d IS DIVIBLE BY 3 OR 5",n);// CONDITION IS GETTING SATISFIED
    }// OR NOT AS OR OPERTOR NEED TO HAVE BOTH CONDITION OR ONE CONDITION SATISFIED
    else{
        printf("THE DIGIT %d IS NOT DIVIBLE BY 3 OR 5",n);
    }
    return 0;
}