#include<stdio.h>
int main(){
    float sp,cp,profit,loss;// WE HAVE CREATED FOUR DABBE
    printf("ENTER THE SELLING PRICE:");
    scanf("%f",&sp);// INPUTING SELLING PRICE
    printf("ENTER THE COST PRICE:");
    scanf("%f",&cp);// INPUTING COST PRICE
    profit = sp - cp;// CALCULATING PROFIT
    loss = cp - sp;// CALCULATING LOSS
    if(sp>cp){// CONDITION
        printf("PROFIT OF %f",profit);
    }
    if(cp>sp){// CONDITION
        printf("LOSS OF %f",loss);
    }
    if(cp==sp){// CONDITION
        printf("NO PROFIT NO LOSS");
    }

    return 0;
}// HERE WE HAVE USED THREE IF STATEMENT