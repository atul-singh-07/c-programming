#include<stdio.h>// CODING FOR DETERMINING EVEN OR ODD NUMBER
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    // if(n%2==0){
    //     printf("EVEN NUMBER");
    // }
    // else{
    //     printf("ODD NUMBER");
    //}

    //TERNARY OPERATOR=[expression1?expression2:expression3]
    n%2==0 ? printf("EVEN NUMBER") : printf("ODD NUMBER");
    //IF           TRUE                      FALSE
    return 0;
}


// ternary operator:used to write if and else statement in 1 line as
//[expression1?expression2:expression3]