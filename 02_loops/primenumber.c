#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER TO CHECK PRIME OR COMPOSITE:");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;// USING BREAK KYUKI JASSE HI CONDITION FIRST TIME HIT HOGI TAB HI LOOP 
            // RUK JAYE NHI NOH n-1 TAK CHALEGA WHICH CAN BE DIFFICULT FOR SYSTEM
        }
    }
    if (n==1) printf("ONE IS NEITHER PRIME NOR COMPOSITE");
    else if(a==0) printf("THE NUMBER IS PRIME");
    else printf("THE NUMBER IS COMPOSITE");
    return 0;
}// FOR BETTER UNDERSTANDING CHECK NOTEBOOK: