#include<stdio.h>
int power(int a, int b){
    if(b==1) return a;
    int x=power(a,b/2);// but this code has a problem as this code is only giving right 
    return x*x;// output on b==even else wrong becaude our b/2 is a int but when b==odd
}//               then we require the use of float or something else for handling this 
int main(){//     situation. 
    int a;
    printf("ENTER A:");
    scanf("%d",&a);
    int b;
    printf("ENTER B:");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d",p);
    return 0;
}