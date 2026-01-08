#include<stdio.h>// ABSOLUTE NUMBER IS LIKE MOD IN MATH WHICH RETURN POSITIVE VALUE
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    if (n<0){// n<0 IS DETERMIING NEGATIVE NUMBER
        n=n*(-1);// OPERATION FOR MAKING NUMBER POSITIVE BY MULTIPLYING BY -1
        printf("THE ABSOLUTE NUMBER IS:%d",n);

    }
    else{
        printf("THE ABSOLUE NUMBER IS:%d",n);
    }
    return 0; 
}