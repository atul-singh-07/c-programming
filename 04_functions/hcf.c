#include<stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a,int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){// the loop is going to min of a or b because hcf of two
        if(a%i==0 && b%i==0){// number cannot exceed the min digit of that two number
            hcf=i;
        }
    }
    return hcf;
}
int main(){
    int a;
    printf("ENTER FIRST NUMBER : ");
    scanf("%d",&a);
    int b;
    printf("ENTER SECOND NUMBER: ");
    scanf("%d",&b);
    int hcf=gcd(a,b);
    printf("THE HCF/GCD OF %d AND %d IS :%d",a,b,hcf);
    return 0;
}