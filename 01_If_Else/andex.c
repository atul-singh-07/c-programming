#include<stdio.h>
int main(){
    int n;
    printf("ENTER A INTEGER:");
    scanf("%d",&n);
    if(n%3==0 && n%5==0){// USED AND LOGICAL OPERATOR FOR CHECKING WHETHER THE NUMBER 
        printf("THE INTEGER %d IS DIVISIBLE BY BOTH 3 AND 5",n);// ENTERED IS DIVISIBLE
    }
    else{
        printf("THE NUMBER %d IS NOT DIVISIBLE BY 3 AND 5",n);// BY BOTH 3 AND 5 OR NOT
    }

    return 0;
}