#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("ENTER THE NTH TERM:");
    scanf("%d",&n);
    int x=n-1;
    for(int i=1;i<=pow(2,x);i=i*2){
        printf("%d ",i);
    }
    return 0;
}