#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER THE FIRST NUMBER:");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&b);
    printf("ENTER THIRD NUMBER:");
    scanf("%d",&c);
    if(a>b){// a>b that means greastest ki race se b bahar
        if(a>c)
        printf("%d IS GREATEST",a);
        else{
            printf("%d IS GREATEST",c);
        }
    }
    else{// IF THIS STATEMENT IS GETTING EXECUTED THAT MEANS B>A
        if(b>c){
            printf("%d IS GREATEST",b);
        }
        else{
            printf("%d IS GREATEST",c);
        }
    }
    return 0;
}