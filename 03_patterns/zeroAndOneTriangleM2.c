#include<stdio.h>
int main(){
    //1
    //0 1
    //1 0 1
    //0 1 0 1
    //1 0 1 0 1
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) printf("%d ",1);// COMPLETE EXPLAINATION IN NOTES like here 
            else printf("%d ",0);//           when i+j=even print 1 else print 0
        }
        printf("\n");
    }
    return 0;
}