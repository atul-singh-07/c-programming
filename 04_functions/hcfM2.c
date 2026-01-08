#include<stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a,int b){
    int hcf;
    for(int i=min(a,b);i>=1;i--){// HERE WE JUST CHANGED THE LOOP CONDITION IN ORDER TO
        if(a%i==0 && b%i==0){
        hcf=i;// REDUCE THE NUMBER FOR WHICH THE CODE WOULD HAVE RUN
        break;// to sto the loop where the condition get hitted
        }
    }
    return hcf;
}
int main(){
    int a;
    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d",&a);
    int b;
    printf("ENTER THE SECOND NUMBER: ");
    scanf("%d",&b);
    int hcf;
    hcf=gcd(a,b);
    printf("THE HCF/GCD OF %d AND %d IS: %d",a,b,hcf);
    return 0;
}