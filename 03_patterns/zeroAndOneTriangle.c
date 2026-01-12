#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
        if(i%2!=0) a=1;// this block of if-els e is deciding the value of a to start print
        else a=0;//       in every line with a=0 or a=1
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            if(a==0) a=1;// this block of if-else is swithching the values of 1 and 0 of a
            else a=0;
        }
        printf("\n");
    }
    return 0;
}