#include<stdio.h>// A MORE UNDERSTANDABLE CODE FOR DRY RUN ALGORITHM.
int main(){
    int n;
    printf("ENTER A NUMBER FOR ULTA STAR TRIANGLE:");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){// here we have taken a variable a which initialy contains n 
            printf("*");// which is being reduced one by one
        }
        a--;
        printf("\n");
    }
    return 0;
}