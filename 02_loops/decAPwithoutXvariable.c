#include<stdio.h>// ONLY WITH THE HELP OF LOOPING VARIABLE
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);// THIS N IS OF NO USE HERE JUST FOR ....
    for(int i=100;i>0;i=i-3){
        printf("%d ",i);
    }
    return 0;
}