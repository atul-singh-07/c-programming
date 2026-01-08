#include<stdio.h>
int main(){
    int n;
    printf("ENTER A POSITIVE INTEGER:");
    scanf("%d",&n);
    if((n%5==0 || n%3==0) && n%15!=0){// HERE WE HAVE USED LOGICAL OPERATOR FOR ALLYING CONDITION BUT USED BRACKETS
        printf("THE INTEGER %d IS DIVISIBLE BY 5 OR 3 BUT NOT BY 15",n);// BECAUSE OF HEIRARCHY OF OPERATOR
    }// WHERE THE HIERARCHY OF && IS GREATER THAN ||
    else{
        printf("THE ENTERED NUMBER DID NOT MATCH THE REQUIRED CONDITION");
    }
    return 0;
}