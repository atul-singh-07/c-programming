#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("ENTER THE NTH TERM:");
    scanf("%d",&n);
    int x=n-1;
    for(int i=1;i<=pow(2,x);i=i*2){// applying the condition of nth term of gp through math
        printf("%d ",i);// function using math library
    }
    return 0;
}