#include <stdio.h>// NOTE: WHEN THE VALUE OF ALL ENTERED INTEGER IS DIFFERENT
int main(){
    int a, b, c;
    printf("ENTER THE FIRST NUMBER:");
    scanf("%d", &a);// INPUT FROM USER
    printf("ENTER THE SECOND NUMBER:");
    scanf("%d", &b);// INPUT FROM USER
    printf("ENTER THE THIRD NUMBER:");
    scanf("%d", &c);// INPUT FROM USER
    if (a > b && a > c){ // USED AND LOGICAL OPERATOR
        printf("%d IS GREATEST", a);
    }
    if (b > a && b > c){// AND LOGICAL OPERATOR
        printf("%d IS GREATEST", b);
    }
    if (c > a && c > b){//AND LOGICAL OPERATOR 
        printf("%d IS GREATEST", c);
    }
    return 0;
}// THIS CODE WILL RETURN THE GREATEST INTEGER AMONG THE ENTERED ONES.