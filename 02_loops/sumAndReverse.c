#include<stdio.h>
int main(){
    int n,lastdigit,sum=0;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int d=n;// HERE D IS USED TO STORE THE VALUE OF N AS FURTHER THE VALUE OF N IS GETTING
    int r=0;// CHANGED BUT WE NEED IT AT THE LAST OF THE CODE:
    while(n>0){
        lastdigit=n%10;
        r=r*10;
        r=r+lastdigit;
        n=n/10;
    }
    sum=d+r;
    printf("THE REVERSE OF THE GIVEN NUMBER IS:%d",sum);
    return 0;
}