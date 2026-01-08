#include<stdio.h>// NOTE:ALL THE ENTERED INTEGER SHOULD BE DIFFERENT
int main(){
    int a,b,c,d;
    printf("ENTER 1ST NUMBER:");
    scanf("%d",&a);
    printf("ENTER 2ND NUMBER:");
    scanf("%d",&b);
    printf("ENTER 3RD NUMBER:");
    scanf("%d",&c);
    printf("ENTER 4TH NUMBER:");
    scanf("%d",&d);
    if(a>b && a>c && a>d){// AND OPERATOR COMPARING 3 CONDITION
        printf("%d IS GREATEST",a);
    }
    if(b>a && b>c && b>d){// AND OPERATOR ""            ""
        printf("%d IS GREATEST",b);
    }
    if(c>a && c>b && c>d){// AND OPERATOR ""             ""
        printf("%d IS GREATEST",c);
    }
    if(d>a && d>b && d>c){// AND OPERATOR ""             ""
        printf("%d IS GREATEST",d);
    }
    
    
    return 0;
}// THIS CODE WILL RETURN THE GREATEST INTEGER AMONG THE REST ONES.