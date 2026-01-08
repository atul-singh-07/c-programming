#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2){
        printf("%d ",i);
    }
    return 0;
}// CODE WHEN AP IS:1 3 5 7 9......2n-1   