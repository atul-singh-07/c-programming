#include<stdio.h>
int main(){
    int n;
    printf("ENTER A POSITIVE INTEGER:");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){// USED OR LOGICAL OPERATOR
        if(n%15!=0){
            printf("THE INTERGER %d IS DIVISIBLE BY 5 OR 3 BUT NOT WITH 15 ",n);
        }
        else{
            printf("ERROR THE NUMBER IS DIVISIBLE BY 15");
        }
    }
    else{
            printf("THE NUMBER IS NOT DIVISIBLE BY 5 OR 3");
        }
    return 0;
}