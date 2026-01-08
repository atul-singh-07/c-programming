#include<stdio.h>
int main(){
    int n,lastdigit;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int r=0;// HERE R IS MEANT BY REVERSE
    while(n>0){
        lastdigit=n%10;
        r=r*10;// this is need to be done first otherwise the reverse number will be left
        r=r+lastdigit;// with a zero.
        n=n/10;
    }
    printf("THE REVERSE OF THE GIVEN NUMBER IS:%d",r);
    return 0;
}