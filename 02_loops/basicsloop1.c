#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for(int i =1;i<=n;i=i+1){
        printf("HELLO WORLD\n");
    }
    return 0;
}// THIS CODE IS SAME AS THE CODE IN basicsofloop THE ONLY DIFFERENCE IT CARRY IS IT 
// TAKING INPUT N WHICH DETERMINE HOW MUCH THE LOOP WILL RUN AND USED

// i=i+1 instead of i++ but BOTH CARRY THE SAME MEANING AND OUTPUT

// AND IN PLACE OF i=i+1 if we use i=i+2
//THEN THE LOOP WILL PRINT HELLO WORLD FIVE TIMES IF n=10
// AND IF i=i+4 THEN THE PRINT STATEMENT WILL PRINT 3 TIMES
// CAN UNDER BETTER USING DRY RUN AND IS GIVEN IN NOTEBOOK
